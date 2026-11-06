#include <asmjit/asmjit.h>

int main() {
  asmjit::CodeHolder code;
  asmjit::Environment env = asmjit::Environment::host();
  if (code.init(env) != asmjit::Error::kOk) return 1;
  return code.environment().arch() == env.arch() ? 0 : 1;
}
