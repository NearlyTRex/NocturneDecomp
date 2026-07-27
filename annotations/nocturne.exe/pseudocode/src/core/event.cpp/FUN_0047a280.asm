; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_event_cpp_FUN_0047a280(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005c168c
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0047a280
        ;   Label: core_event.cpp_FUN_0047a280
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047a284
    MOV EDX,dword ptr [EAX]             ; 0047a288
        ;   Label: LAB_0047a288
    MOV DL,byte ptr [ECX + EDX*0x1]     ; 0047a28a
    INC DL                              ; 0047a28d
    AND EDX,0xff                        ; 0047a28f
    TEST byte ptr [EDX + 0x5c168c],0x2  ; 0047a295 | DAT_005c168c
    JZ 0x0047a250                       ; 0047a29c
        ;   XREF to: 0047a250 (CONDITIONAL_JUMP)  ; LAB_0047a250
    INC dword ptr [EAX]                 ; 0047a29e
    JMP 0x0047a288                      ; 0047a2a0
        ;   XREF to: 0047a288 (UNCONDITIONAL_JUMP)  ; LAB_0047a288

