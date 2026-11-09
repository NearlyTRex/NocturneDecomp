; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_00431490(CCharacter *this_ptr,CDemonActor *carrier,CVector3f *drop_position)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
; CVector3f *      Stack[0xc]:4   drop_position
;
; XREF[2]:
;   core_doc.cpp_FUN_004764c0 at 004764dd
;   core_stranger.cpp_FUN_00591de0 at 00591dfd
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431490
        ;   Label: core_charactr.cpp_FUN_00431490
    PUSH ESI                            ; 00431491
    PUSH EDI                            ; 00431492
    PUSH EBP                            ; 00431493
    MOV EDI,dword ptr [ESP + 0x18]      ; 00431494
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00431498
    MOV ESI,dword ptr [ESP + 0x14]      ; 0043149c
    ADD ESI,0x25a8                      ; 004314a0
    MOV EBX,ESI                         ; 004314a6
    ADD ESI,0xf0                        ; 004314a8
    MOV EDX,dword ptr [EBX + 0x8]       ; 004314ae
        ;   Label: LAB_004314ae
    CMP EDI,EDX                         ; 004314b1
    JZ 0x004314c1                       ; 004314b3
        ;   XREF to: 004314c1 (CONDITIONAL_JUMP)  ; LAB_004314c1
    ADD EBX,0x78                        ; 004314b5
    CMP EBX,ESI                         ; 004314b8
    JNZ 0x004314ae                      ; 004314ba
        ;   XREF to: 004314ae (CONDITIONAL_JUMP)  ; LAB_004314ae
    POP EBP                             ; 004314bc
    POP EDI                             ; 004314bd
    POP ESI                             ; 004314be
    POP EBX                             ; 004314bf
    RET                                 ; 004314c0
    PUSH EBP                            ; 004314c1
        ;   Label: LAB_004314c1
    MOV EDX,dword ptr [EDX + 0x154]     ; 004314c2
    PUSH EDI                            ; 004314c8
    CALL dword ptr [EDX + 0x8c]         ; 004314c9
    ADD ESP,0x8                         ; 004314cf
    MOV dword ptr [EBX + 0x8],0x0       ; 004314d2
    ADD EBX,0x78                        ; 004314d9
    CMP EBX,ESI                         ; 004314dc
    JNZ 0x004314ae                      ; 004314de
        ;   XREF to: 004314ae (CONDITIONAL_JUMP)  ; LAB_004314ae
    POP EBP                             ; 004314e0
    POP EDI                             ; 004314e1
    POP ESI                             ; 004314e2
    POP EBX                             ; 004314e3
    RET                                 ; 004314e4

