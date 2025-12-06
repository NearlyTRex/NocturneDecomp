; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int crt_io.c_findNextWithAttributes_FUN_00609d5c(HANDLE hFindFile, DWORD dwAttributeMask, LPWIN32_FIND_DATAA lpFindFileData)
;
; Parameters:
; typedef HANDLE void * Stack[0x4]:4   hFindFile
; typedef DWORD ulong Stack[0x8]:4   dwAttributeMask
; typedef LPWIN32_FIND_DATAA _WIN32_FIND_DATAA * Stack[0xc]:4   lpFindFileData
;
; XREF[2]:
;   crt_io.c_findFirstFileWrapper_FUN_006021f0 at 0060221d
;   crt_io.c_findNextFileWrapper_FUN_00602300 at 00602336
;
; Referenced Globals:
;   FindNextFileA* PTR_FindNextFileA_00611550 = 00211d96
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00609d5c
        ;   Label: crt_io.c_findNextWithAttributes_FUN_00609d5c
    PUSH ESI                            ; 00609d5d
    PUSH EDI                            ; 00609d5e
    MOV EDI,dword ptr [ESP + 0x10]      ; 00609d5f
    MOV ESI,dword ptr [ESP + 0x14]      ; 00609d63
    MOV EBX,dword ptr [ESP + 0x18]      ; 00609d67
    CMP dword ptr [EBX],0x0             ; 00609d6b
        ;   Label: LAB_00609d6b
    JNZ 0x00609d76                      ; 00609d6e | LAB_00609d76
        ;   XREF to: 00609d76 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX],0x80            ; 00609d70
    TEST dword ptr [EBX],ESI            ; 00609d76
        ;   Label: LAB_00609d76
    JZ 0x00609d83                       ; 00609d78 | LAB_00609d83
        ;   XREF to: 00609d83 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 00609d7a
    POP EDI                             ; 00609d7f
    POP ESI                             ; 00609d80
    POP EBX                             ; 00609d81
    RET                                 ; 00609d82
    PUSH EBX                            ; 00609d83
        ;   Label: LAB_00609d83
    PUSH EDI                            ; 00609d84
    CALL dword ptr CS:[0x611550]        ; 00609d85 | FindNextFileA * PTR_FindNextFileA_00611550
    TEST EAX,EAX                        ; 00609d8c
    JNZ 0x00609d6b                      ; 00609d8e | LAB_00609d6b
        ;   XREF to: 00609d6b (CONDITIONAL_JUMP)
    POP EDI                             ; 00609d90
    POP ESI                             ; 00609d91
    POP EBX                             ; 00609d92
    RET                                 ; 00609d93

