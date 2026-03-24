; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_io_c__findnext_FUN_00602300(HANDLE find_handle,LPWIN32_FIND_DATAA find_data)
;
; Parameters:
; HANDLE           Stack[0x4]:4   find_handle
; LPWIN32_FIND_DATAA Stack[0x8]:4   find_data
;
; XREF[1]:
;   core_texlist.cpp_CTextureList_buildMasterTextureList_FUN_005dc2a0 at 005dc426
;
; Referenced Globals:
;   undefined4 SUB_00609d5c
;   FIND_NEXT_FILE_A_FUNC* g_FindNextFileAFunc = 00211d96
;
; Called Functions:
;   crt_errno.c___set_errno_FUN_006083fc
;   crt_errno.c_convertWindowsErrorToErrno_FUN_00608390
;   crt_io.c_convertFileInfo_FUN_00602264
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00602300
        ;   Label: crt_io.c__findnext_FUN_00602300
    SUB ESP,0x140                       ; 00602301
    MOV EAX,ESP                         ; 00602307
    PUSH EAX                            ; 00602309
    MOV EDX,dword ptr [ESP + 0x14c]     ; 0060230a
    PUSH EDX                            ; 00602311
    CALL dword ptr CS:[0x611550]        ; 00602312 | g_FindNextFileAFunc
    TEST EAX,EAX                        ; 00602319
    JNZ 0x00602329                      ; 0060231b
        ;   XREF to: 00602329 (CONDITIONAL_JUMP)  ; LAB_00602329
    CALL crt_errno.c___set_errno_FUN_006083fc ; 0060231d
        ;   XREF to: 006083fc (UNCONDITIONAL_CALL)  ; DWORD crt_errno.c___set_errno_FUN_006083fc()
    MOV EAX,0xffffffff                  ; 00602322
    JMP 0x00602370                      ; 00602327
        ;   XREF to: 00602370 (UNCONDITIONAL_JUMP)  ; LAB_00602370
    MOV EAX,ESP                         ; 00602329
        ;   Label: LAB_00602329
    PUSH EAX                            ; 0060232b
    PUSH 0x37                           ; 0060232c
    MOV EBX,dword ptr [ESP + 0x150]     ; 0060232e
    PUSH EBX                            ; 00602335
    CALL 0x00609d5c                     ; 00602336
        ;   XREF to: 00609d5c (UNCONDITIONAL_CALL)  ; SUB_00609d5c
    ADD ESP,0xc                         ; 0060233b
    TEST EAX,EAX                        ; 0060233e
    JNZ 0x00602359                      ; 00602340
        ;   XREF to: 00602359 (CONDITIONAL_JUMP)  ; LAB_00602359
    PUSH 0x2                            ; 00602342
    CALL crt_errno.c_convertWindowsErrorToErrno_FUN_00608390 ; 00602344
        ;   XREF to: 00608390 (UNCONDITIONAL_CALL)  ; int crt_errno.c_convertWindowsErrorToErrno_FUN_00608390(DWORD windows_error)
    MOV EAX,0xffffffff                  ; 00602349
    ADD ESP,0x4                         ; 0060234e
    ADD ESP,0x140                       ; 00602351
    POP EBX                             ; 00602357
    RET                                 ; 00602358
    MOV ECX,dword ptr [ESP + 0x14c]     ; 00602359
        ;   Label: LAB_00602359
    PUSH ECX                            ; 00602360
    LEA EAX,[ESP + 0x4]                 ; 00602361
    PUSH EAX                            ; 00602365
    CALL crt_io.c_convertFileInfo_FUN_00602264 ; 00602366
        ;   XREF to: 00602264 (UNCONDITIONAL_CALL)  ; void crt_io.c_convertFileInfo_FUN_00602264(LPWIN32_FIND_DATAA win32_data, _find_t * dos_info)
    ADD ESP,0x8                         ; 0060236b
    XOR EAX,EAX                         ; 0060236e
    ADD ESP,0x140                       ; 00602370
        ;   Label: LAB_00602370
    POP EBX                             ; 00602376
    RET                                 ; 00602377

