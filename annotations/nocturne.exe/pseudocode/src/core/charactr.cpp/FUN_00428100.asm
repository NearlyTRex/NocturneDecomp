; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_FUN_00428100(CCharacter *this_ptr,CDemonActor *carrier,CVector3f *drop_position)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   carrier
; CVector3f *      Stack[0xc]:4   drop_position
;
; XREF[1]:
;   core_stranger.cpp_CStranger_drop_FUN_00540920 at 0054093d
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428100
        ;   Label: core_charactr.cpp_FUN_00428100
    PUSH ESI                            ; 00428101
    PUSH EDI                            ; 00428102
    PUSH EBP                            ; 00428103
    MOV EDI,dword ptr [ESP + 0x18]      ; 00428104
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00428108
    MOV ESI,dword ptr [ESP + 0x14]      ; 0042810c
    ADD ESI,0x24a4                      ; 00428110
    MOV EBX,ESI                         ; 00428116
    ADD ESI,0x88                        ; 00428118
    MOV EDX,dword ptr [EBX + 0x8]       ; 0042811e
        ;   Label: LAB_0042811e
    CMP EDI,EDX                         ; 00428121
    JZ 0x00428131                       ; 00428123
        ;   XREF to: 00428131 (CONDITIONAL_JUMP)  ; LAB_00428131
    ADD EBX,0x44                        ; 00428125
    CMP EBX,ESI                         ; 00428128
    JNZ 0x0042811e                      ; 0042812a
        ;   XREF to: 0042811e (CONDITIONAL_JUMP)  ; LAB_0042811e
    POP EBP                             ; 0042812c
    POP EDI                             ; 0042812d
    POP ESI                             ; 0042812e
    POP EBX                             ; 0042812f
    RET                                 ; 00428130
    PUSH EBP                            ; 00428131
        ;   Label: LAB_00428131
    MOV EDX,dword ptr [EDX + 0x14c]     ; 00428132
    PUSH EDI                            ; 00428138
    CALL dword ptr [EDX + 0x84]         ; 00428139
    ADD ESP,0x8                         ; 0042813f
    MOV dword ptr [EBX + 0x8],0x0       ; 00428142
    ADD EBX,0x44                        ; 00428149
    CMP EBX,ESI                         ; 0042814c
    JNZ 0x0042811e                      ; 0042814e
        ;   XREF to: 0042811e (CONDITIONAL_JUMP)  ; LAB_0042811e
    POP EBP                             ; 00428150
    POP EDI                             ; 00428151
    POP ESI                             ; 00428152
    POP EBX                             ; 00428153
    RET                                 ; 00428154

