; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004867e0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408790
;   FUN_0044fc80
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004867e0
        ;   Label: FUN_004867e0
    PUSH ESI                            ; 004867e1
    PUSH EDI                            ; 004867e2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004867e3
    PUSH EBX                            ; 004867e7
    CALL FUN_00408790                   ; 004867e8
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 004867ed
    ADD EAX,0x3a4                       ; 004867f0
    PUSH EAX                            ; 004867f5
    CALL FUN_0044fc80                   ; 004867f6
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    LEA EBX,[EAX + 0xfffffc5c]          ; 004867fb
    MOV dword ptr [EBX + 0x2b0],0x5f5f44 ; 00486801
    MOV dword ptr [EBX + 0x2b8],0x3f800000 ; 0048680b
    MOV ESI,0x5d2b97                    ; 00486815
    MOV dword ptr [EBX + 0x2bc],0x3f800000 ; 0048681a
    ADD ESP,0x4                         ; 00486824
    MOV dword ptr [EBX + 0x2c0],0x3f800000 ; 00486827
    LEA EDI,[EBX + 0x2c8]               ; 00486831
    MOV dword ptr [EBX + 0x2b4],0x0     ; 00486837
    PUSH EDI                            ; 00486841
    MOV AL,byte ptr [ESI]               ; 00486842
        ;   Label: LAB_00486842
    MOV byte ptr [EDI],AL               ; 00486844
    CMP AL,0x0                          ; 00486846
    JZ 0x0048685a                       ; 00486848
        ;   XREF to: 0048685a (CONDITIONAL_JUMP)  ; LAB_0048685a
    MOV AL,byte ptr [ESI + 0x1]         ; 0048684a
    ADD ESI,0x2                         ; 0048684d
    MOV byte ptr [EDI + 0x1],AL         ; 00486850
    ADD EDI,0x2                         ; 00486853
    CMP AL,0x0                          ; 00486856
    JNZ 0x00486842                      ; 00486858
        ;   XREF to: 00486842 (CONDITIONAL_JUMP)  ; LAB_00486842
    POP EDI                             ; 0048685a
        ;   Label: LAB_0048685a
    MOV ESI,0x5d2b9c                    ; 0048685b
    LEA EDI,[EBX + 0x32c]               ; 00486860
    PUSH EDI                            ; 00486866
    MOV AL,byte ptr [ESI]               ; 00486867
        ;   Label: LAB_00486867
    MOV byte ptr [EDI],AL               ; 00486869
    CMP AL,0x0                          ; 0048686b
    JZ 0x0048687f                       ; 0048686d
        ;   XREF to: 0048687f (CONDITIONAL_JUMP)  ; LAB_0048687f
    MOV AL,byte ptr [ESI + 0x1]         ; 0048686f
    ADD ESI,0x2                         ; 00486872
    MOV byte ptr [EDI + 0x1],AL         ; 00486875
    ADD EDI,0x2                         ; 00486878
    CMP AL,0x0                          ; 0048687b
    JNZ 0x00486867                      ; 0048687d
        ;   XREF to: 00486867 (CONDITIONAL_JUMP)  ; LAB_00486867
    POP EDI                             ; 0048687f
        ;   Label: LAB_0048687f
    MOV dword ptr [EBX + 0x5c0],0x0     ; 00486880
    MOV dword ptr [EBX + 0x5c4],0x3dcccccd ; 0048688a
    MOV dword ptr [EBX + 0x2c4],0x1     ; 00486894
    MOV dword ptr [EBX + 0x398],0xff    ; 0048689e
    MOV dword ptr [EBX + 0x39c],0x0     ; 004868a8
    MOV dword ptr [EBX + 0x3a0],0x0     ; 004868b2
    PUSH 0x5d2ba1                       ; 004868bc
    MOV dword ptr [EBX + 0x394],0x1     ; 004868c1
    LEA EAX,[EBX + 0x3a4]               ; 004868cb
    MOV dword ptr [EBX + 0x390],0x0     ; 004868d1
    PUSH EAX                            ; 004868db
    MOV dword ptr [EBX + 0x5c8],0x0     ; 004868dc
    CALL FUN_0044fd70                   ; 004868e6
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    MOV dword ptr [EBX + 0x520],0x41a00000 ; 004868eb
    MOV dword ptr [EBX + 0x524],0x42c80000 ; 004868f5
    MOV dword ptr [EBX + 0x528],0x3f800000 ; 004868ff
    MOV dword ptr [EBX + 0x52c],0x0     ; 00486909
    MOV dword ptr [EBX + 0x530],0x4000  ; 00486913
    MOV dword ptr [EBX + 0x534],0x10000 ; 0048691d
    MOV dword ptr [EBX + 0x538],0xffff  ; 00486927
    MOV dword ptr [EBX + 0x53c],0x3ecccccd ; 00486931
    MOV dword ptr [EBX + 0x550],0x42480000 ; 0048693b
    MOV dword ptr [EBX + 0x540],0x0     ; 00486945
    MOV dword ptr [EBX + 0x544],0x0     ; 0048694f
    MOV dword ptr [EBX + 0x548],0x1     ; 00486959
    MOV dword ptr [EBX + 0x54c],0x0     ; 00486963
    MOV byte ptr [EBX + 0x554],0x0      ; 0048696d
    MOV dword ptr [EBX + 0x5bc],0x1     ; 00486974
    MOV dword ptr [EBX + 0x60c],0x0     ; 0048697e
    ADD ESP,0x8                         ; 00486988
    MOV dword ptr [EBX + 0x614],0x0     ; 0048698b
    MOV EAX,EBX                         ; 00486995
    MOV dword ptr [EBX + 0x618],0x3f800000 ; 00486997
    POP EDI                             ; 004869a1
    POP ESI                             ; 004869a2
    POP EBX                             ; 004869a3
    RET                                 ; 004869a4

