; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl support_trstream_cpp_COutStreamFile_open_FUN_005749d0(COutStreamFile *this_ptr,undefined4 param_2,undefined4 param_3)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
;
; XREF[3]:
;   core_game.cpp_FUN_004bda10 at 004bdd5f
;   core_game.cpp_FUN_004bdfb0 at 004be2b8
;   support_trstream.cpp_COutStreamFile_ctorOpen_FUN_005747e0 at 00574809
;
; Called Functions:
;   crt_stdio.c_fopen_FUN_005a43ec
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005749d0
        ;   Label: support_trstream.cpp_COutStreamFile_open_FUN_005749d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005749d1
    PUSH EBX                            ; 005749d5
    MOV EAX,dword ptr [EBX]             ; 005749d6
    CALL dword ptr [EAX + 0x18]         ; 005749d8
    ADD ESP,0x4                         ; 005749db
    MOV EDX,dword ptr [ESP + 0x10]      ; 005749de
    PUSH EDX                            ; 005749e2
    MOV ECX,dword ptr [ESP + 0x10]      ; 005749e3
    PUSH ECX                            ; 005749e7
    CALL crt_stdio.c_fopen_FUN_005a43ec ; 005749e8
        ;   XREF to: 005a43ec (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fopen_FUN_005a43ec()
    ADD ESP,0x8                         ; 005749ed
    MOV dword ptr [EBX + 0x4],EAX       ; 005749f0
    TEST EAX,EAX                        ; 005749f3
    JZ 0x005749fe                       ; 005749f5
        ;   XREF to: 005749fe (CONDITIONAL_JUMP)  ; LAB_005749fe
    MOV EAX,0x1                         ; 005749f7
    POP EBX                             ; 005749fc
    RET                                 ; 005749fd
    PUSH EBX                            ; 005749fe
        ;   Label: LAB_005749fe
    MOV EAX,dword ptr [EBX]             ; 005749ff
    CALL dword ptr [EAX + 0x18]         ; 00574a01
    ADD ESP,0x4                         ; 00574a04
    XOR EAX,EAX                         ; 00574a07
    POP EBX                             ; 00574a09
    RET                                 ; 00574a0a

