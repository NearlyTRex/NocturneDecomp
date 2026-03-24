; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HANDLE __cdecl crt_io_c__findfirst_FUN_006021f0(char *filespec,LPWIN32_FIND_DATAA find_data)
;
; Parameters:
; char *           Stack[0x4]:4   filespec
; LPWIN32_FIND_DATAA Stack[0x8]:4   find_data
;
; XREF[1]:
;   core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0 at 005dc2d4
;
; Referenced Globals:
;   FIND_CLOSE_FUNC* g_FindCloseFunc = 00211d78
;   FIND_FIRST_FILE_A_FUNC* g_FindFirstFileAFunc = 00211d84
;
; Called Functions:
;   crt_errno.c___set_errno_FUN_006083fc
;   crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
;   crt_io.c_convertFileInfo_FUN_00602264
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 006021f0
        ;   Label: crt_io.c__findfirst_FUN_006021f0
    SUB ESP,0x140                       ; 006021f1
    MOV EAX,ESP                         ; 006021f7
    PUSH EAX                            ; 006021f9
    MOV EDX,dword ptr [ESP + 0x14c]     ; 006021fa
    PUSH EDX                            ; 00602201
    CALL dword ptr CS:[0x61154c]        ; 00602202 | g_FindFirstFileAFunc
    MOV EBX,EAX                         ; 00602209
    CMP EAX,-0x1                        ; 0060220b
    JNZ 0x00602217                      ; 0060220e
        ;   XREF to: 00602217 (CONDITIONAL_JUMP)  ; LAB_00602217
    CALL crt_errno.c___set_errno_FUN_006083fc ; 00602210
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c___set_errno_FUN_006083fc()
    JMP 0x00602257                      ; 00602215
        ;   XREF to: 00602257 (UNCONDITIONAL_JUMP)  ; LAB_00602257
    MOV EAX,ESP                         ; 00602217
        ;   Label: LAB_00602217
    PUSH EAX                            ; 00602219
    PUSH 0x37                           ; 0060221a
    PUSH EBX                            ; 0060221c
    CALL 0x00609d5c                     ; 0060221d
        ;   XREF to: 00609d5c (UNCONDITIONAL_CALL)  ; LAB_00609d5b+1
    ADD ESP,0xc                         ; 00602222
    TEST EAX,EAX                        ; 00602225
    JNZ 0x00602242                      ; 00602227
        ;   XREF to: 00602242 (CONDITIONAL_JUMP)  ; LAB_00602242
    PUSH EBX                            ; 00602229
    CALL dword ptr CS:[0x611548]        ; 0060222a | g_FindCloseFunc
    PUSH 0x2                            ; 00602231
    CALL crt_errno.c_convertWindowsErrorToErrno_FUN_00608390 ; 00602233
        ;   XREF to: 00608390 (UNCONDITIONAL_CALL)  ; int crt_errno.c_convertWindowsErrorToErrno_FUN_00608390(DWORD windows_error)
    MOV EAX,0xffffffff                  ; 00602238
    ADD ESP,0x4                         ; 0060223d
    JMP 0x00602259                      ; 00602240
        ;   XREF to: 00602259 (UNCONDITIONAL_JUMP)  ; LAB_00602259
    MOV ECX,dword ptr [ESP + 0x14c]     ; 00602242
        ;   Label: LAB_00602242
    PUSH ECX                            ; 00602249
    LEA EAX,[ESP + 0x4]                 ; 0060224a
    PUSH EAX                            ; 0060224e
    CALL crt_io.c_convertFileInfo_FUN_00602264 ; 0060224f
        ;   XREF to: 00602264 (UNCONDITIONAL_CALL)  ; void crt_io.c_convertFileInfo_FUN_00602264(LPWIN32_FIND_DATAA win32_data, _find_t * dos_info)
    ADD ESP,0x8                         ; 00602254
    MOV EAX,EBX                         ; 00602257
        ;   Label: LAB_00602257
    ADD ESP,0x140                       ; 00602259
        ;   Label: LAB_00602259
    POP EBX                             ; 0060225f
    RET                                 ; 00602260

