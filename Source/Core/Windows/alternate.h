class WinCore : public PlatformCore
{
private:
    HANDLE providerStdoutWrite, providerStderrWrite;

public:
    int SpawnProcess(int argc, char **argv);
