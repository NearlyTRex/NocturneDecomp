; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_fileio_cpp_buildCheckoutFilePath_FUN_004b1e60(char *dest_buffer)
;
; Parameters:
; char *           Stack[0x4]:4   dest_buffer
; Local Variables:
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0xc]:1  local_c
;
; Referenced Globals:
;   TerminatedCString s_engine_fileio_cpp_00626060
;   TerminatedCString s_versionControlDirectory__00626075
;   TerminatedCString s_checkout_txt_00626096
;   undefined4 s_heckout.txt_00626097
;   undefined4 s_eckout.txt_00626098
;   undefined4 s_ckout.txt_00626099
;   char[264] g_VersionControlDirectory
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   engine_dosio.c_ensureTrailingSlash_FUN_00481f80
;   engine_dosio.c_makePath_FUN_00481f50
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b1e60
        ;   Label: engine_fileio.cpp_buildCheckoutFilePath_FUN_004b1e60
    PUSH EDI                            ; 004b1e61
    SUB ESP,0x104                       ; 004b1e62
    MOV EDI,dword ptr [ESP + 0x110]     ; 004b1e68
    CMP byte ptr [0x02d12ac8],0x0       ; 004b1e6f | g_VersionControlDirectory
    JZ 0x004b1eda                       ; 004b1e76
        ;   XREF to: 004b1eda (CONDITIONAL_JUMP)  ; LAB_004b1eda
    MOV EAX,ESP                         ; 004b1e78
        ;   Label: LAB_004b1e78
    PUSH EAX                            ; 004b1e7a
    LEA EAX,[ESP + 0x104]               ; 004b1e7b
    PUSH EAX                            ; 004b1e82
    PUSH 0x2d12ac8                      ; 004b1e83 | g_VersionControlDirectory
    CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80 ; 004b1e88
        ;   XREF to: 00481f80 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_ensureTrailingSlash_FUN_00481f80(char * input_path, char * drive, char * output_path)
    ADD ESP,0xc                         ; 004b1e8d
    PUSH 0x0                            ; 004b1e90
    PUSH 0x0                            ; 004b1e92
    LEA EAX,[ESP + 0x8]                 ; 004b1e94
    PUSH EAX                            ; 004b1e98
    LEA EAX,[ESP + 0x10c]               ; 004b1e99
    PUSH EAX                            ; 004b1ea0
    PUSH EDI                            ; 004b1ea1
    CALL engine_dosio.c_makePath_FUN_00481f50 ; 004b1ea2
        ;   XREF to: 00481f50 (UNCONDITIONAL_CALL)  ; void engine_dosio.c_makePath_FUN_00481f50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004b1ea7
    MOV ESI,0x626096                    ; 004b1eaa | = "checkout.txt"
    PUSH EDI                            ; 004b1eaf
    SUB ECX,ECX                         ; 004b1eb0
    DEC ECX                             ; 004b1eb2
    MOV AL,0x0                          ; 004b1eb3
    SCASB.REPNE ES:EDI                  ; 004b1eb5
    DEC EDI                             ; 004b1eb7
    MOV AL,byte ptr [ESI]               ; 004b1eb8 | = "checkout.txt" | s_eckout.txt_00626098
        ;   Label: LAB_004b1eb8
    MOV byte ptr [EDI],AL               ; 004b1eba
    CMP AL,0x0                          ; 004b1ebc
    JZ 0x004b1ed0                       ; 004b1ebe
        ;   XREF to: 004b1ed0 (CONDITIONAL_JUMP)  ; LAB_004b1ed0
    MOV AL,byte ptr [ESI + 0x1]         ; 004b1ec0 | s_heckout.txt_00626097 | s_ckout.txt_00626099
    ADD ESI,0x2                         ; 004b1ec3
    MOV byte ptr [EDI + 0x1],AL         ; 004b1ec6
    ADD EDI,0x2                         ; 004b1ec9
    CMP AL,0x0                          ; 004b1ecc
    JNZ 0x004b1eb8                      ; 004b1ece
        ;   XREF to: 004b1eb8 (CONDITIONAL_JUMP)  ; LAB_004b1eb8
    POP EDI                             ; 004b1ed0
        ;   Label: LAB_004b1ed0
    ADD ESP,0x104                       ; 004b1ed1
    POP EDI                             ; 004b1ed7
    POP ESI                             ; 004b1ed8
    RET                                 ; 004b1ed9
    MOV EDX,0x626060                    ; 004b1eda | = "..\\engine\\fileio.cpp"
        ;   Label: LAB_004b1eda
    MOV ECX,0xdd                        ; 004b1edf
    PUSH 0x626075                       ; 004b1ee4 | = "versionControlDirectory not set!"
    MOV dword ptr [0x02f0ca48],EDX      ; 004b1ee9 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004b1eef | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b1ef5
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b1efa
    JMP 0x004b1e78                      ; 004b1efd
        ;   XREF to: 004b1e78 (UNCONDITIONAL_JUMP)  ; LAB_004b1e78

