; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00597710(int *param_1,undefined4 param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00597cd0 at 00597cdc
;
; Referenced Globals:
;   TerminatedCString s_Texture_cache_has_wrappe_005f7ba8
;   TerminatedCString s_Total_d_32_d_64_d_128_d_005f7bdc
;
; Called Functions:
;   FUN_005bfb40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00597710
        ;   Label: FUN_00597710
    PUSH ESI                            ; 00597711
    PUSH EDI                            ; 00597712
    PUSH EBP                            ; 00597713
    SUB ESP,0x8                         ; 00597714
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00597717
    XOR ESI,ESI                         ; 0059771b
    XOR EDI,EDI                         ; 0059771d
    XOR ECX,ECX                         ; 0059771f
    XOR EBX,EBX                         ; 00597721
    MOV dword ptr [ESP + 0x4],ESI       ; 00597723
    MOV EDX,dword ptr [EAX]             ; 00597727
    MOV dword ptr [ESP],ESI             ; 00597729
    TEST EDX,EDX                        ; 0059772c
    JNZ 0x005977c1                      ; 0059772e
        ;   XREF to: 005977c1 (CONDITIONAL_JUMP)  ; LAB_005977c1
    CMP dword ptr [EAX + 0x18004],0x0   ; 00597734
    JLE 0x00597788                      ; 0059773b
        ;   XREF to: 00597788 (CONDITIONAL_JUMP)  ; LAB_00597788
    CMP dword ptr [EAX + 0x4],0x20      ; 0059773d
        ;   Label: LAB_0059773d
    JNZ 0x00597744                      ; 00597741
        ;   XREF to: 00597744 (CONDITIONAL_JUMP)  ; LAB_00597744
    INC ESI                             ; 00597743
    CMP dword ptr [EAX + 0x4],0x40      ; 00597744
        ;   Label: LAB_00597744
    JNZ 0x0059774b                      ; 00597748
        ;   XREF to: 0059774b (CONDITIONAL_JUMP)  ; LAB_0059774b
    INC EDI                             ; 0059774a
    CMP dword ptr [EAX + 0x4],0x80      ; 0059774b
        ;   Label: LAB_0059774b
    JNZ 0x00597755                      ; 00597752
        ;   XREF to: 00597755 (CONDITIONAL_JUMP)  ; LAB_00597755
    INC ECX                             ; 00597754
    CMP dword ptr [EAX + 0x4],0x100     ; 00597755
        ;   Label: LAB_00597755
    JNZ 0x00597762                      ; 0059775c
        ;   XREF to: 00597762 (CONDITIONAL_JUMP)  ; LAB_00597762
    INC dword ptr [ESP + 0x4]           ; 0059775e
    CMP dword ptr [EAX + 0x4],0x200     ; 00597762
        ;   Label: LAB_00597762
    JNZ 0x0059776c                      ; 00597769
        ;   XREF to: 0059776c (CONDITIONAL_JUMP)  ; LAB_0059776c
    INC EBX                             ; 0059776b
    CMP dword ptr [EAX + 0x4],0x400     ; 0059776c
        ;   Label: LAB_0059776c
    JNZ 0x00597778                      ; 00597773
        ;   XREF to: 00597778 (CONDITIONAL_JUMP)  ; LAB_00597778
    INC dword ptr [ESP]                 ; 00597775
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00597778
        ;   Label: LAB_00597778
    INC EDX                             ; 0059777c
    ADD EAX,0x60                        ; 0059777d
    CMP EDX,dword ptr [EBP + 0x18004]   ; 00597780
    JL 0x0059773d                       ; 00597786
        ;   XREF to: 0059773d (CONDITIONAL_JUMP)  ; LAB_0059773d
    MOV EDX,dword ptr [ESP]             ; 00597788
        ;   Label: LAB_00597788
    PUSH EDX                            ; 0059778b
    PUSH EBX                            ; 0059778c
    MOV EBX,dword ptr [ESP + 0xc]       ; 0059778d
    PUSH EBX                            ; 00597791
    PUSH ECX                            ; 00597792
    PUSH EDI                            ; 00597793
    MOV EAX,dword ptr [ESP + 0x30]      ; 00597794
    PUSH ESI                            ; 00597798
    MOV ESI,dword ptr [EAX + 0x18004]   ; 00597799
    PUSH ESI                            ; 0059779f
    PUSH 0x5f7bdc                       ; 005977a0 | = "Total: %d, 32: %d, 64: %d, 128: %d, 2..."
    MOV EDI,dword ptr [ESP + 0x40]      ; 005977a5
    PUSH EDI                            ; 005977a9
    CALL FUN_005bfb40                   ; 005977aa
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x24                        ; 005977af
    ADD ESP,0x8                         ; 005977b2
    POP EBP                             ; 005977b5
    POP EDI                             ; 005977b6
    POP ESI                             ; 005977b7
    POP EBX                             ; 005977b8
    LEA EAX,[EAX]                       ; 005977b9
    NOP                                 ; 005977bf
    RET                                 ; 005977c0
    PUSH 0x5f7ba8                       ; 005977c1 | = "Texture cache has wrapped.  Make it b..."
        ;   Label: LAB_005977c1
    MOV EAX,dword ptr [ESP + 0x24]      ; 005977c6
    PUSH EAX                            ; 005977ca
    CALL FUN_005bfb40                   ; 005977cb
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb40()
    ADD ESP,0x8                         ; 005977d0
    ADD ESP,0x8                         ; 005977d3
    POP EBP                             ; 005977d6
    POP EDI                             ; 005977d7
    POP ESI                             ; 005977d8
    POP EBX                             ; 005977d9
    RET                                 ; 005977da

