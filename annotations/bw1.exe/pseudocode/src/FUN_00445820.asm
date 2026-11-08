; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00445820(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fddc0
;   undefined4 DAT_005fddc4
;
; Called Functions:
;   FUN_004a0410
;   FUN_00569f50
;   FUN_005bfb70
;   FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00445820
        ;   Label: FUN_00445820
    PUSH ESI                            ; 00445821
    PUSH EDI                            ; 00445822
    MOV EBX,dword ptr [ESP + 0x10]      ; 00445823
    PUSH EBX                            ; 00445827
    CALL FUN_004a0410                   ; 00445828
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0410()
    ADD ESP,0x4                         ; 0044582d
    PUSH 0x5fcd90                       ; 00445830
    PUSH 0x18                           ; 00445835
    ADD EAX,0xc398                      ; 00445837
    PUSH EAX                            ; 0044583c
    CALL FUN_005c0357                   ; 0044583d
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    ADD ESP,0xc                         ; 00445842
    LEA EBX,[EAX + 0xffff3c68]          ; 00445845
    PUSH 0x5d6d08                       ; 0044584b
    LEA EAX,[EBX + 0x158]               ; 00445850
    PUSH EAX                            ; 00445856
    MOV ESI,0x5d6d17                    ; 00445857
    MOV dword ptr [EBX + 0x154],0x5fddd4 ; 0044585c
    CALL FUN_00569f50                   ; 00445866
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    LEA EDI,[EBX + 0xc268]              ; 0044586b
    FLD float ptr [0x005fddc0]          ; 00445871 | DAT_005fddc0
    MOV dword ptr [EBX + 0x2fec],0x3f19999a ; 00445877
    FLD float ptr [0x005fddc4]          ; 00445881 | DAT_005fddc4
    MOV dword ptr [EBX + 0x2ff0],0x40000000 ; 00445887
    ADD ESP,0x8                         ; 00445891
    FXCH                                ; 00445894
    FSTP float ptr [EBX + 0x2ff4]       ; 00445896
    FSTP float ptr [EBX + 0x2ff8]       ; 0044589c
    PUSH EDI                            ; 004458a2
    MOV AL,byte ptr [ESI]               ; 004458a3
        ;   Label: LAB_004458a3
    MOV byte ptr [EDI],AL               ; 004458a5
    CMP AL,0x0                          ; 004458a7
    JZ 0x004458bb                       ; 004458a9
        ;   XREF to: 004458bb (CONDITIONAL_JUMP)  ; LAB_004458bb
    MOV AL,byte ptr [ESI + 0x1]         ; 004458ab
    ADD ESI,0x2                         ; 004458ae
    MOV byte ptr [EDI + 0x1],AL         ; 004458b1
    ADD EDI,0x2                         ; 004458b4
    CMP AL,0x0                          ; 004458b7
    JNZ 0x004458a3                      ; 004458b9
        ;   XREF to: 004458a3 (CONDITIONAL_JUMP)  ; LAB_004458a3
    POP EDI                             ; 004458bb
        ;   Label: LAB_004458bb
    MOV ESI,0x5d6d1c                    ; 004458bc
    LEA EDI,[EBX + 0xc328]              ; 004458c1
    PUSH EDI                            ; 004458c7
    MOV AL,byte ptr [ESI]               ; 004458c8
        ;   Label: LAB_004458c8
    MOV byte ptr [EDI],AL               ; 004458ca
    CMP AL,0x0                          ; 004458cc
    JZ 0x004458e0                       ; 004458ce
        ;   XREF to: 004458e0 (CONDITIONAL_JUMP)  ; LAB_004458e0
    MOV AL,byte ptr [ESI + 0x1]         ; 004458d0
    ADD ESI,0x2                         ; 004458d3
    MOV byte ptr [EDI + 0x1],AL         ; 004458d6
    ADD EDI,0x2                         ; 004458d9
    CMP AL,0x0                          ; 004458dc
    JNZ 0x004458c8                      ; 004458de
        ;   XREF to: 004458c8 (CONDITIONAL_JUMP)  ; LAB_004458c8
    POP EDI                             ; 004458e0
        ;   Label: LAB_004458e0
    MOV dword ptr [EBX + 0xc38c],0x41000000 ; 004458e1
    MOV dword ptr [EBX + 0xca58],0x0    ; 004458eb
    MOV ESI,0x5d6d21                    ; 004458f5
    MOV dword ptr [EBX + 0xc324],0x2    ; 004458fa
    PUSH EDI                            ; 00445904
    MOV AL,byte ptr [ESI]               ; 00445905
        ;   Label: LAB_00445905
    MOV byte ptr [EDI],AL               ; 00445907
    CMP AL,0x0                          ; 00445909
    JZ 0x0044591d                       ; 0044590b
        ;   XREF to: 0044591d (CONDITIONAL_JUMP)  ; LAB_0044591d
    MOV AL,byte ptr [ESI + 0x1]         ; 0044590d
    ADD ESI,0x2                         ; 00445910
    MOV byte ptr [EDI + 0x1],AL         ; 00445913
    ADD EDI,0x2                         ; 00445916
    CMP AL,0x0                          ; 00445919
    JNZ 0x00445905                      ; 0044591b
        ;   XREF to: 00445905 (CONDITIONAL_JUMP)  ; LAB_00445905
    POP EDI                             ; 0044591d
        ;   Label: LAB_0044591d
    PUSH 0x6c0                          ; 0044591e
    PUSH 0x0                            ; 00445923
    LEA EAX,[EBX + 0xc398]              ; 00445925
    PUSH EAX                            ; 0044592b
    MOV dword ptr [EBX + 0xc394],0x0    ; 0044592c
    CALL FUN_005bfb70                   ; 00445936
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    MOV dword ptr [EBX + 0xc25c],0x40c00000 ; 0044593b
    MOV dword ptr [EBX + 0xca5c],0x0    ; 00445945
    MOV dword ptr [EBX + 0xc394],0x0    ; 0044594f
    MOV dword ptr [EBX + 0xc304],0x0    ; 00445959
    MOV dword ptr [EBX + 0xc308],0x0    ; 00445963
    MOV dword ptr [EBX + 0xc30c],0x0    ; 0044596d
    MOV dword ptr [EBX + 0xc310],0x0    ; 00445977
    MOV dword ptr [EBX + 0xc314],0x0    ; 00445981
    MOV dword ptr [EBX + 0xc318],0x0    ; 0044598b
    ADD ESP,0xc                         ; 00445995
    MOV dword ptr [EBX + 0xc31c],0x0    ; 00445998
    MOV EAX,EBX                         ; 004459a2
    MOV dword ptr [EBX + 0xc320],0x0    ; 004459a4
    POP EDI                             ; 004459ae
    POP ESI                             ; 004459af
    POP EBX                             ; 004459b0
    RET                                 ; 004459b1

