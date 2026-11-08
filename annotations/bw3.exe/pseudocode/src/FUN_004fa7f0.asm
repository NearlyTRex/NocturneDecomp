; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_004fa7f0(int param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004fac10 at 004fb015
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fa7f0
        ;   Label: FUN_004fa7f0
    PUSH ESI                            ; 004fa7f1
    PUSH EDI                            ; 004fa7f2
    PUSH EBP                            ; 004fa7f3
    SUB ESP,0x20                        ; 004fa7f4
    MOV EBX,dword ptr [ESP + 0x38]      ; 004fa7f7
    MOV EAX,dword ptr [ESP + 0x34]      ; 004fa7fb
    MOV EDX,0x7149f2ca                  ; 004fa7ff
    XOR EBP,EBP                         ; 004fa804
    XOR ECX,ECX                         ; 004fa806
    MOV ESI,dword ptr [EAX + 0x54]      ; 004fa808
    MOV dword ptr [ESP + 0x1c],EDX      ; 004fa80b
    TEST ESI,ESI                        ; 004fa80f
    JLE 0x004fa879                      ; 004fa811
        ;   XREF to: 004fa879 (CONDITIONAL_JUMP)  ; LAB_004fa879
    MOV EDX,dword ptr [EAX + 0x58]      ; 004fa813
    ADD EDX,0x4                         ; 004fa816
    FLD float ptr [EBX]                 ; 004fa819
        ;   Label: LAB_004fa819
    FLD float ptr [EBX + 0x4]           ; 004fa81b
    FLD float ptr [EBX + 0x8]           ; 004fa81e
    MOV EDI,ESP                         ; 004fa821
    LEA ESI,[ESP + 0xc]                 ; 004fa823
    FXCH ST2                            ; 004fa827
    FSUB float ptr [EDX]                ; 004fa829
    FXCH                                ; 004fa82b
    FSUB float ptr [EDX + 0x4]          ; 004fa82d
    FXCH ST2                            ; 004fa830
    FSUB float ptr [EDX + 0x8]          ; 004fa832
    FXCH                                ; 004fa835
    FSTP float ptr [ESP + 0xc]          ; 004fa837
    FXCH                                ; 004fa83b
    FSTP float ptr [ESP + 0x10]         ; 004fa83d
    FSTP float ptr [ESP + 0x14]         ; 004fa841
    MOVSD ES:EDI,ESI                    ; 004fa845
    MOVSD ES:EDI,ESI                    ; 004fa846
    MOVSD ES:EDI,ESI                    ; 004fa847
    FLD float ptr [ESP + 0x4]           ; 004fa848
    FMUL ST0                            ; 004fa84c
    FLD float ptr [ESP]                 ; 004fa84e
    FMUL ST0                            ; 004fa851
    FADDP                               ; 004fa853
    FLD float ptr [ESP + 0x8]           ; 004fa855
    FMUL ST0                            ; 004fa859
    FADDP                               ; 004fa85b
    FST float ptr [ESP + 0x18]          ; 004fa85d
    FCOMP float ptr [ESP + 0x1c]        ; 004fa861
    FNSTSW AX                           ; 004fa865
    SAHF                                ; 004fa867
    JC 0x004fa891                       ; 004fa868
        ;   XREF to: 004fa891 (CONDITIONAL_JUMP)  ; LAB_004fa891
    MOV EAX,dword ptr [ESP + 0x34]      ; 004fa86a
        ;   Label: LAB_004fa86a
    INC ECX                             ; 004fa86e
    MOV EDI,dword ptr [EAX + 0x54]      ; 004fa86f
    ADD EDX,0x10                        ; 004fa872
    CMP ECX,EDI                         ; 004fa875
    JL 0x004fa819                       ; 004fa877
        ;   XREF to: 004fa819 (CONDITIONAL_JUMP)  ; LAB_004fa819
    MOV EAX,EBP                         ; 004fa879
        ;   Label: LAB_004fa879
    ADD ESP,0x20                        ; 004fa87b
    POP EBP                             ; 004fa87e
    POP EDI                             ; 004fa87f
    POP ESI                             ; 004fa880
    POP EBX                             ; 004fa881
    LEA EAX,[EAX]                       ; 004fa882
    LEA EDX,[EDX]                       ; 004fa888
    MOV EAX,EAX                         ; 004fa88e
    RET                                 ; 004fa890
    MOV EBP,dword ptr [ESP + 0x18]      ; 004fa891
        ;   Label: LAB_004fa891
    MOV dword ptr [ESP + 0x1c],EBP      ; 004fa895
    MOV EBP,ECX                         ; 004fa899
    JMP 0x004fa86a                      ; 004fa89b
        ;   XREF to: 004fa86a (UNCONDITIONAL_JUMP)  ; LAB_004fa86a

