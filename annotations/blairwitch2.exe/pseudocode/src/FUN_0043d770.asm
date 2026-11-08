; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043d770(int param_1,float *param_2,float param_3)
;
; Local Variables:
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_0052ddf0 at 0052e75e
;
; Referenced Globals:
;   undefined4 DAT_005ce43e
;   undefined4 DAT_005ce446
;
; Called Functions:
;   FUN_005b77c0
;   FUN_005b7ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043d770
        ;   Label: FUN_0043d770
    PUSH ESI                            ; 0043d771
    PUSH EDI                            ; 0043d772
    PUSH EBP                            ; 0043d773
    MOV EBP,ESP                         ; 0043d774
    SUB ESP,0x14                        ; 0043d776
    AND ESP,0xfffffff8                  ; 0043d779
    MOV EDI,dword ptr [EBP + 0x14]      ; 0043d77c
    MOV ESI,dword ptr [EBP + 0x18]      ; 0043d77f
    PUSH 0x12d40                        ; 0043d782
    PUSH 0x0                            ; 0043d787
    PUSH 0xae24d8                       ; 0043d789
    CALL FUN_005b77c0                   ; 0043d78e
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b77c0()
    ADD ESP,0xc                         ; 0043d793
    TEST ESI,ESI                        ; 0043d796
    JZ 0x0043d839                       ; 0043d798
        ;   XREF to: 0043d839 (CONDITIONAL_JUMP)  ; LAB_0043d839
    XOR EDX,EDX                         ; 0043d79e
    MOV ECX,dword ptr [EDI + 0x154]     ; 0043d7a0
    MOV dword ptr [ESP + 0x8],EDX       ; 0043d7a6
    TEST ECX,ECX                        ; 0043d7aa
    JLE 0x0043d839                      ; 0043d7ac
        ;   XREF to: 0043d839 (CONDITIONAL_JUMP)  ; LAB_0043d839
    MOV dword ptr [ESP + 0x4],EDX       ; 0043d7b2
    MOV dword ptr [ESP + 0xc],EDX       ; 0043d7b6
    MOV ECX,0xae24d8                    ; 0043d7ba
        ;   Label: LAB_0043d7ba
    MOV EDX,dword ptr [ESP + 0xc]       ; 0043d7bf
    MOV EBX,dword ptr [ESP + 0x4]       ; 0043d7c3
    ADD ECX,EDX                         ; 0043d7c7
    MOV EDX,0xa005d4                    ; 0043d7c9
    MOV EAX,dword ptr [EDI + 0x150]     ; 0043d7ce
    ADD EDX,EBX                         ; 0043d7d4
    XOR EBX,EBX                         ; 0043d7d6
    TEST EAX,EAX                        ; 0043d7d8
    JLE 0x0043d80b                      ; 0043d7da
        ;   XREF to: 0043d80b (CONDITIONAL_JUMP)  ; LAB_0043d80b
    FLD float ptr [ESI + 0x4]           ; 0043d7dc
        ;   Label: LAB_0043d7dc
    FMUL float ptr [EDX + 0x4]          ; 0043d7df
    FLD float ptr [ESI]                 ; 0043d7e2
    FMUL float ptr [EDX]                ; 0043d7e4
    FADDP                               ; 0043d7e6
    FLD float ptr [ESI + 0x8]           ; 0043d7e8
    FMUL float ptr [EDX + 0x8]          ; 0043d7eb
    FADDP                               ; 0043d7ee
    FST float ptr [ESP]                 ; 0043d7f0
    FLDZ                                ; 0043d7f3
    FCOMPP                              ; 0043d7f5
    FNSTSW AX                           ; 0043d7f7
    SAHF                                ; 0043d7f9
    JC 0x0043d841                       ; 0043d7fa
        ;   XREF to: 0043d841 (CONDITIONAL_JUMP)  ; LAB_0043d841
    ADD EDX,0xc                         ; 0043d7fc
        ;   Label: LAB_0043d7fc
    INC EBX                             ; 0043d7ff
    MOV EAX,dword ptr [EDI + 0x150]     ; 0043d800
    INC ECX                             ; 0043d806
    CMP EBX,EAX                         ; 0043d807
    JL 0x0043d7dc                       ; 0043d809
        ;   XREF to: 0043d7dc (CONDITIONAL_JUMP)  ; LAB_0043d7dc
    MOV EBX,dword ptr [ESP + 0x4]       ; 0043d80b
        ;   Label: LAB_0043d80b
    MOV EAX,dword ptr [ESP + 0xc]       ; 0043d80f
    MOV EDX,dword ptr [ESP + 0x8]       ; 0043d813
    MOV ECX,dword ptr [EDI + 0x154]     ; 0043d817
    ADD EBX,0xf00                       ; 0043d81d
    ADD EAX,0x140                       ; 0043d823
    INC EDX                             ; 0043d828
    MOV dword ptr [ESP + 0x4],EBX       ; 0043d829
    MOV dword ptr [ESP + 0xc],EAX       ; 0043d82d
    MOV dword ptr [ESP + 0x8],EDX       ; 0043d831
    CMP EDX,ECX                         ; 0043d835
    JL 0x0043d7ba                       ; 0043d837
        ;   XREF to: 0043d7ba (CONDITIONAL_JUMP)  ; LAB_0043d7ba
    MOV ESP,EBP                         ; 0043d839
        ;   Label: LAB_0043d839
    POP EBP                             ; 0043d83b
    POP EDI                             ; 0043d83c
    POP ESI                             ; 0043d83d
    POP EBX                             ; 0043d83e
    NOP                                 ; 0043d83f
    RET                                 ; 0043d840
    FLD float ptr [ESP]                 ; 0043d841
        ;   Label: LAB_0043d841
    FMUL float ptr [EBP + 0x1c]         ; 0043d844
    FMUL double ptr [0x005ce43e]        ; 0043d847 | DAT_005ce43e
    FMUL double ptr [0x005ce446]        ; 0043d84d | DAT_005ce446
    CALL FUN_005b7ff0                   ; 0043d853
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x10]        ; 0043d858
    MOV AL,byte ptr [ESP + 0x10]        ; 0043d85c
    MOV byte ptr [ECX],AL               ; 0043d860
    JMP 0x0043d7fc                      ; 0043d862
        ;   XREF to: 0043d7fc (UNCONDITIONAL_JUMP)  ; LAB_0043d7fc

