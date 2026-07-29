; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_dosio_cpp_setFileAttributes_FUN_00456a30(char *filename,byte flags)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; byte             Stack[0x8]:1   flags
;
; Called Functions:
;   engine_dosio.cpp_setReadonlyAttribute_FUN_00565dd0
;
; *****************************************************************************

section .text

    MOV DL,byte ptr [ESP + 0x8]         ; 00456a30
        ;   Label: engine_dosio.cpp_setFileAttributes_FUN_00456a30
    MOV EAX,0x180                       ; 00456a34
    TEST DL,0x8                         ; 00456a39
    JZ 0x00456a43                       ; 00456a3c
        ;   XREF to: 00456a43 (CONDITIONAL_JUMP)  ; LAB_00456a43
    MOV EAX,0x100                       ; 00456a3e
    PUSH EAX                            ; 00456a43
        ;   Label: LAB_00456a43
    MOV EDX,dword ptr [ESP + 0x8]       ; 00456a44
    PUSH EDX                            ; 00456a48
    CALL engine_dosio.cpp_setReadonlyAttribute_FUN_00565dd0 ; 00456a49
        ;   XREF to: 00565dd0 (UNCONDITIONAL_CALL)  ; DWORD engine_dosio.cpp_setReadonlyAttribute_FUN_00565dd0(char * filename, DWORD file_attributes)
    ADD ESP,0x8                         ; 00456a4e
    TEST EAX,EAX                        ; 00456a51
    SETZ AL                             ; 00456a53
    AND EAX,0xff                        ; 00456a56
    RET                                 ; 00456a5b

