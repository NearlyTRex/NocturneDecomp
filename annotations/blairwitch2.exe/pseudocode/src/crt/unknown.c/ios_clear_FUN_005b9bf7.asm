; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl crt_unknown_c_ios_clear_FUN_005b9bf7(ios *this_ptr,uint state_flags)
;
; Parameters:
; ios *            Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   state_flags
;
; XREF[2]:
;   crt_unknown.c_openFile_FUN_005b9c39 at 005b9c91
;   engine_dosio.cpp_reopenFileStream_FUN_00460d30 at 00460d5a
;
; Called Functions:
;   crt_unknown.c_FUN_005c0b85
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b9bf7
        ;   Label: crt_unknown.c_ios_clear_FUN_005b9bf7
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b9bf8
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b9bfc
    PUSH EDX                            ; 005b9c00
    PUSH EAX                            ; 005b9c01
    MOV EBX,dword ptr [EAX + 0x10]      ; 005b9c02
    MOV dword ptr [EAX + 0x10],0x0      ; 005b9c05
    CALL crt_unknown.c_FUN_005c0b85     ; 005b9c0c
        ;   XREF to: 005c0b85 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0b85()
    ADD ESP,0x8                         ; 005b9c11
    MOV EAX,EBX                         ; 005b9c14
    POP EBX                             ; 005b9c16
    RET                                 ; 005b9c17

