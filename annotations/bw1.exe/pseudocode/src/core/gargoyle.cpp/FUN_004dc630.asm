; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_gargoyle_cpp_FUN_004dc630(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined        Stack[-0x48]:1  local_48
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
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
;   core_gargoyle.cpp_CGargoyle_process_FUN_004dc7e0 at 004dcc3f
;
; Referenced Globals:
;   undefined4 DAT_005e391c
;   undefined4 DAT_005e3920
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc630
        ;   Label: core_gargoyle.cpp_FUN_004dc630
    PUSH ESI                            ; 004dc631
    PUSH EDI                            ; 004dc632
    PUSH EBP                            ; 004dc633
    MOV EBP,ESP                         ; 004dc634
    SUB ESP,0x50                        ; 004dc636
    AND ESP,0xfffffff8                  ; 004dc639
    MOV EBX,dword ptr [EBP + 0x14]      ; 004dc63c
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 004dc63f
    MOV dword ptr [EBX + 0xc2bc],0x0    ; 004dc645
    TEST EDX,EDX                        ; 004dc64f
    JZ 0x004dc711                       ; 004dc651
        ;   XREF to: 004dc711 (CONDITIONAL_JUMP)  ; LAB_004dc711
    MOV EAX,EDX                         ; 004dc657
    LEA EDX,[EBX + 0x20]                ; 004dc659
    LEA EDI,[ESP + 0xc]                 ; 004dc65c
    MOV ESI,ESP                         ; 004dc660
    FLD float ptr [EDX]                 ; 004dc662
    FLD float ptr [EDX + 0x4]           ; 004dc664
    FLD float ptr [EDX + 0x8]           ; 004dc667
    FXCH ST2                            ; 004dc66a
    FSUB float ptr [EAX + 0x20]         ; 004dc66c
    FXCH                                ; 004dc66f
    FSUB float ptr [EAX + 0x24]         ; 004dc671
    FXCH ST2                            ; 004dc674
    FSUB float ptr [EAX + 0x28]         ; 004dc676
    FXCH                                ; 004dc679
    FSTP float ptr [ESP]                ; 004dc67b
    FXCH                                ; 004dc67e
    FSTP float ptr [ESP + 0x4]          ; 004dc680
    FSTP float ptr [ESP + 0x8]          ; 004dc684
    MOVSD ES:EDI,ESI                    ; 004dc688
    MOVSD ES:EDI,ESI                    ; 004dc689
    MOVSD ES:EDI,ESI                    ; 004dc68a
    FLD float ptr [ESP + 0x10]          ; 004dc68b
    FMUL ST0                            ; 004dc68f
    FLD float ptr [ESP + 0xc]           ; 004dc691
    FMUL ST0                            ; 004dc695
    FADDP                               ; 004dc697
    FLD float ptr [ESP + 0x14]          ; 004dc699
    FMUL ST0                            ; 004dc69d
    FADDP                               ; 004dc69f
    FSQRT                               ; 004dc6a1
    FCOMP float ptr [EBX + 0xc1e0]      ; 004dc6a3
    FNSTSW AX                           ; 004dc6a9
    SAHF                                ; 004dc6ab
    JBE 0x004dc730                      ; 004dc6ac
        ;   XREF to: 004dc730 (CONDITIONAL_JUMP)  ; LAB_004dc730
    MOV ECX,dword ptr [EBX + 0xc2a4]    ; 004dc6b2
    TEST ECX,ECX                        ; 004dc6b8
    JZ 0x004dc711                       ; 004dc6ba
        ;   XREF to: 004dc711 (CONDITIONAL_JUMP)  ; LAB_004dc711
    MOV EAX,ECX                         ; 004dc6bc
    LEA EDI,[ESP + 0x24]                ; 004dc6be
    LEA ESI,[ESP + 0x30]                ; 004dc6c2
    FLD float ptr [EAX + 0x20]          ; 004dc6c6
    FLD float ptr [EAX + 0x24]          ; 004dc6c9
    FLD float ptr [EAX + 0x28]          ; 004dc6cc
    FXCH ST2                            ; 004dc6cf
    FSUB float ptr [EDX]                ; 004dc6d1
    FXCH                                ; 004dc6d3
    FSUB float ptr [EDX + 0x4]          ; 004dc6d5
    FXCH ST2                            ; 004dc6d8
    FSUB float ptr [EDX + 0x8]          ; 004dc6da
    FXCH                                ; 004dc6dd
    FSTP float ptr [ESP + 0x30]         ; 004dc6df
    FXCH                                ; 004dc6e3
    FSTP float ptr [ESP + 0x34]         ; 004dc6e5
    FSTP float ptr [ESP + 0x38]         ; 004dc6e9
    MOVSD ES:EDI,ESI                    ; 004dc6ed
    MOVSD ES:EDI,ESI                    ; 004dc6ee
    MOVSD ES:EDI,ESI                    ; 004dc6ef
    FLD float ptr [ESP + 0x28]          ; 004dc6f0
    FMUL ST0                            ; 004dc6f4
    FLD float ptr [ESP + 0x24]          ; 004dc6f6
    FMUL ST0                            ; 004dc6fa
    FADDP                               ; 004dc6fc
    FLD float ptr [ESP + 0x2c]          ; 004dc6fe
    FMUL ST0                            ; 004dc702
    FADDP                               ; 004dc704
    FSQRT                               ; 004dc706
    FLD1                                ; 004dc708
    FCOMPP                              ; 004dc70a
    FNSTSW AX                           ; 004dc70c
    SAHF                                ; 004dc70e
    JBE 0x004dc71a                      ; 004dc70f
        ;   XREF to: 004dc71a (CONDITIONAL_JUMP)  ; LAB_004dc71a
    XOR EAX,EAX                         ; 004dc711
        ;   Label: LAB_004dc711
    MOV ESP,EBP                         ; 004dc713
    POP EBP                             ; 004dc715
    POP EDI                             ; 004dc716
    POP ESI                             ; 004dc717
    POP EBX                             ; 004dc718
    RET                                 ; 004dc719
    MOV EAX,0x1                         ; 004dc71a
        ;   Label: LAB_004dc71a
    MOV dword ptr [EBX + 0xc2bc],0x1    ; 004dc71f
    MOV ESP,EBP                         ; 004dc729
    POP EBP                             ; 004dc72b
    POP EDI                             ; 004dc72c
    POP ESI                             ; 004dc72d
    POP EBX                             ; 004dc72e
    RET                                 ; 004dc72f
    LEA EAX,[ESP + 0xc]                 ; 004dc730
        ;   Label: LAB_004dc730
    PUSH EAX                            ; 004dc734
    LEA ESI,[ESP + 0x1c]                ; 004dc735
    LEA EDI,[ESP + 0x40]                ; 004dc739
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 004dc73d
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[ESP + 0x1c]                ; 004dc742
    LEA EAX,[ESP + 0x40]                ; 004dc746
    ADD ESP,0x4                         ; 004dc74a
    LEA EDX,[ESP + 0xc]                 ; 004dc74d
    MOVSD ES:EDI,ESI                    ; 004dc751
    MOVSD ES:EDI,ESI                    ; 004dc752
    MOVSD ES:EDI,ESI                    ; 004dc753
    CMP EDX,EAX                         ; 004dc754
    JZ 0x004dc770                       ; 004dc756
        ;   XREF to: 004dc770 (CONDITIONAL_JUMP)  ; LAB_004dc770
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004dc758
    MOV dword ptr [ESP + 0xc],EAX       ; 004dc75c
    MOV EAX,dword ptr [ESP + 0x40]      ; 004dc760
    MOV dword ptr [ESP + 0x10],EAX      ; 004dc764
    MOV EAX,dword ptr [ESP + 0x44]      ; 004dc768
    MOV dword ptr [ESP + 0x14],EAX      ; 004dc76c
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004dc770
        ;   Label: LAB_004dc770
    FLD float ptr [EAX + 0x34]          ; 004dc776
    FSUB float ptr [ESP + 0x10]         ; 004dc779
    SUB ESP,0x4                         ; 004dc77d
    FSTP float ptr [ESP]                ; 004dc780
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 004dc783
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cd60()
    MOV dword ptr [ESP + 0x50],EAX      ; 004dc788
    FLD float ptr [ESP + 0x50]          ; 004dc78c
    ADD ESP,0x4                         ; 004dc790
    FST float ptr [ESP + 0x48]          ; 004dc793
    FCOMP float ptr [0x005e391c]        ; 004dc797 | DAT_005e391c
    FNSTSW AX                           ; 004dc79d
    SAHF                                ; 004dc79f
    JC 0x004dc7b5                       ; 004dc7a0
        ;   XREF to: 004dc7b5 (CONDITIONAL_JUMP)  ; LAB_004dc7b5
    FLD float ptr [ESP + 0x48]          ; 004dc7a2
    FCOMP float ptr [0x005e3920]        ; 004dc7a6 | DAT_005e3920
    FNSTSW AX                           ; 004dc7ac
    SAHF                                ; 004dc7ae
    JBE 0x004dc711                      ; 004dc7af
        ;   XREF to: 004dc711 (CONDITIONAL_JUMP)  ; LAB_004dc711
    MOV EAX,0x1                         ; 004dc7b5
        ;   Label: LAB_004dc7b5
    MOV ESP,EBP                         ; 004dc7ba
    POP EBP                             ; 004dc7bc
    POP EDI                             ; 004dc7bd
    POP ESI                             ; 004dc7be
    POP EBX                             ; 004dc7bf
    RET                                 ; 004dc7c0

