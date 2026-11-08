; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00435660(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004085c0
;   FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00435660
        ;   Label: FUN_00435660
    PUSH EDI                            ; 00435661
    MOV EDX,dword ptr [ESP + 0xc]       ; 00435662
    PUSH EDX                            ; 00435666
    CALL FUN_004085c0                   ; 00435667
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 0043566c
    PUSH 0x5fd890                       ; 0043566f
    PUSH 0x14                           ; 00435674
    ADD EAX,0x28c                       ; 00435676
    PUSH EAX                            ; 0043567b
    CALL FUN_005c0357                   ; 0043567c
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    LEA EDX,[EAX + 0xfffffd74]          ; 00435681
    MOV dword ptr [EDX + 0x154],0x5fd7b4 ; 00435687
    MOV dword ptr [EDX + 0x158],0xa     ; 00435691
    MOV dword ptr [EDX + 0x15c],0x40a00000 ; 0043569b
    MOV dword ptr [EDX + 0x55c],0x3f800000 ; 004356a5
    MOV dword ptr [EDX + 0x560],0x3f000000 ; 004356af
    MOV dword ptr [EDX + 0x564],0x42000000 ; 004356b9
    MOV ESI,0x5d5ff6                    ; 004356c3
    MOV dword ptr [EDX + 0x568],0x3f666666 ; 004356c8
    ADD ESP,0xc                         ; 004356d2
    MOV dword ptr [EDX + 0x164],0x0     ; 004356d5
    LEA EDI,[EDX + 0x174]               ; 004356df
    MOV dword ptr [EDX + 0x168],0x0     ; 004356e5
    PUSH EDI                            ; 004356ef
    MOV AL,byte ptr [ESI]               ; 004356f0
        ;   Label: LAB_004356f0
    MOV byte ptr [EDI],AL               ; 004356f2
    CMP AL,0x0                          ; 004356f4
    JZ 0x00435708                       ; 004356f6
        ;   XREF to: 00435708 (CONDITIONAL_JUMP)  ; LAB_00435708
    MOV AL,byte ptr [ESI + 0x1]         ; 004356f8
    ADD ESI,0x2                         ; 004356fb
    MOV byte ptr [EDI + 0x1],AL         ; 004356fe
    ADD EDI,0x2                         ; 00435701
    CMP AL,0x0                          ; 00435704
    JNZ 0x004356f0                      ; 00435706
        ;   XREF to: 004356f0 (CONDITIONAL_JUMP)  ; LAB_004356f0
    POP EDI                             ; 00435708
        ;   Label: LAB_00435708
    MOV dword ptr [EDX + 0x16c],0xd     ; 00435709
    MOV dword ptr [EDX + 0x170],0x0     ; 00435713
    MOV ESI,0x5d6004                    ; 0043571d
    MOV dword ptr [EDX + 0xfc],0x1      ; 00435722
    LEA EDI,[EDX + 0x1b4]               ; 0043572c
    MOV dword ptr [EDX + 0xf8],0x0      ; 00435732
    PUSH EDI                            ; 0043573c
    MOV AL,byte ptr [ESI]               ; 0043573d
        ;   Label: LAB_0043573d
    MOV byte ptr [EDI],AL               ; 0043573f
    CMP AL,0x0                          ; 00435741
    JZ 0x00435755                       ; 00435743
        ;   XREF to: 00435755 (CONDITIONAL_JUMP)  ; LAB_00435755
    MOV AL,byte ptr [ESI + 0x1]         ; 00435745
    ADD ESI,0x2                         ; 00435748
    MOV byte ptr [EDI + 0x1],AL         ; 0043574b
    ADD EDI,0x2                         ; 0043574e
    CMP AL,0x0                          ; 00435751
    JNZ 0x0043573d                      ; 00435753
        ;   XREF to: 0043573d (CONDITIONAL_JUMP)  ; LAB_0043573d
    POP EDI                             ; 00435755
        ;   Label: LAB_00435755
    MOV ESI,0x5d6013                    ; 00435756
    LEA EDI,[EDX + 0x21c]               ; 0043575b
    PUSH EDI                            ; 00435761
    MOV AL,byte ptr [ESI]               ; 00435762
        ;   Label: LAB_00435762
    MOV byte ptr [EDI],AL               ; 00435764
    CMP AL,0x0                          ; 00435766
    JZ 0x0043577a                       ; 00435768
        ;   XREF to: 0043577a (CONDITIONAL_JUMP)  ; LAB_0043577a
    MOV AL,byte ptr [ESI + 0x1]         ; 0043576a
    ADD ESI,0x2                         ; 0043576d
    MOV byte ptr [EDI + 0x1],AL         ; 00435770
    ADD EDI,0x2                         ; 00435773
    CMP AL,0x0                          ; 00435776
    JNZ 0x00435762                      ; 00435778
        ;   XREF to: 00435762 (CONDITIONAL_JUMP)  ; LAB_00435762
    POP EDI                             ; 0043577a
        ;   Label: LAB_0043577a
    MOV dword ptr [EDX + 0x574],0x0     ; 0043577b
    MOV EAX,EDX                         ; 00435785
    MOV dword ptr [EDX + 0x288],0x1     ; 00435787
    POP EDI                             ; 00435791
    POP ESI                             ; 00435792
    RET                                 ; 00435793

