; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041a600(undefined4 *param_1,uint param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[11]:
;   FUN_004090f0 at 00409159
;   FUN_0041aa20 at 0041aa4d
;   FUN_0041b700 at 0041b72c
;   FUN_0052ddf0 at 0052e212
;   FUN_00534ea0 at 0053529b
;   FUN_00536cb0 at 00536ceb
;   FUN_00538d10 at 00538e28
;   FUN_005487d0 at 005488a1
;   FUN_00560cb0 at 00560d99
;   FUN_0057ec70 at 0057ee11
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041a600
        ;   Label: FUN_0041a600
    PUSH EDI                            ; 0041a601
    SUB ESP,0x18                        ; 0041a602
    MOV EDX,dword ptr [ESP + 0x24]      ; 0041a605
    MOV ECX,dword ptr [ESP + 0x28]      ; 0041a609
    MOV EAX,ESI                         ; 0041a60d
    TEST CL,0x1                         ; 0041a60f
    JNZ 0x0041a656                      ; 0041a612
        ;   XREF to: 0041a656 (CONDITIONAL_JUMP)  ; LAB_0041a656
    MOV EBX,dword ptr [EDX]             ; 0041a614
    MOV dword ptr [ESP + 0xc],EBX       ; 0041a616
        ;   Label: LAB_0041a616
    MOV EBX,dword ptr [ESP + 0xc]       ; 0041a61a
    MOV dword ptr [ESP],EBX             ; 0041a61e
    TEST CL,0x2                         ; 0041a621
    JZ 0x0041a65b                       ; 0041a624
        ;   XREF to: 0041a65b (CONDITIONAL_JUMP)  ; LAB_0041a65b
    MOV EBX,dword ptr [EDX + 0x10]      ; 0041a626
    MOV dword ptr [ESP + 0x10],EBX      ; 0041a629
        ;   Label: LAB_0041a629
    MOV EBX,dword ptr [ESP + 0x10]      ; 0041a62d
    MOV dword ptr [ESP + 0x4],EBX       ; 0041a631
    TEST CL,0x4                         ; 0041a635
    JZ 0x0041a660                       ; 0041a638
        ;   XREF to: 0041a660 (CONDITIONAL_JUMP)  ; LAB_0041a660
    MOV EDX,dword ptr [EDX + 0x14]      ; 0041a63a
    MOV dword ptr [ESP + 0x14],EDX      ; 0041a63d
        ;   Label: LAB_0041a63d
    MOV EDX,dword ptr [ESP + 0x14]      ; 0041a641
    MOV ESI,ESP                         ; 0041a645
    MOV EDI,EAX                         ; 0041a647
    MOV dword ptr [ESP + 0x8],EDX       ; 0041a649
    MOVSD ES:EDI,ESI                    ; 0041a64d
    MOVSD ES:EDI,ESI                    ; 0041a64e
    MOVSD ES:EDI,ESI                    ; 0041a64f
    ADD ESP,0x18                        ; 0041a650
    POP EDI                             ; 0041a653
    POP EBX                             ; 0041a654
    RET                                 ; 0041a655
    MOV EBX,dword ptr [EDX + 0xc]       ; 0041a656
        ;   Label: LAB_0041a656
    JMP 0x0041a616                      ; 0041a659
        ;   XREF to: 0041a616 (UNCONDITIONAL_JUMP)  ; LAB_0041a616
    MOV EBX,dword ptr [EDX + 0x4]       ; 0041a65b
        ;   Label: LAB_0041a65b
    JMP 0x0041a629                      ; 0041a65e
        ;   XREF to: 0041a629 (UNCONDITIONAL_JUMP)  ; LAB_0041a629
    MOV EDX,dword ptr [EDX + 0x8]       ; 0041a660
        ;   Label: LAB_0041a660
    JMP 0x0041a63d                      ; 0041a663
        ;   XREF to: 0041a63d (UNCONDITIONAL_JUMP)  ; LAB_0041a63d

