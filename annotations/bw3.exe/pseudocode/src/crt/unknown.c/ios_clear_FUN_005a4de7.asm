; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_unknown_c_ios_clear_FUN_005a4de7(ios *this_ptr,uint state_flags)
;
; Parameters:
; ios *            Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   state_flags
;
; XREF[2]:
;   crt_unknown.c_openFile_FUN_005a4e29 at 005a4e81
;   engine_dosio.cpp_reopenFileStream_FUN_00465a80 at 00465aaa
;
; Called Functions:
;   crt_unknown.c_FUN_005abc85
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4de7
        ;   Label: crt_unknown.c_ios_clear_FUN_005a4de7
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a4de8
    MOV EDX,dword ptr [ESP + 0xc]       ; 005a4dec
    PUSH EDX                            ; 005a4df0
    PUSH EAX                            ; 005a4df1
    MOV EBX,dword ptr [EAX + 0x10]      ; 005a4df2
    MOV dword ptr [EAX + 0x10],0x0      ; 005a4df5
    CALL crt_unknown.c_FUN_005abc85     ; 005a4dfc
        ;   XREF to: 005abc85 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005abc85()
    ADD ESP,0x8                         ; 005a4e01
    MOV EAX,EBX                         ; 005a4e04
    POP EBX                             ; 005a4e06
    RET                                 ; 005a4e07

