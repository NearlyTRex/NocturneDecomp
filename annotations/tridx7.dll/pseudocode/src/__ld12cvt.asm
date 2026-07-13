; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __ld12cvt(ushort *param_1,uint *param_2,int *param_3)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined        Stack[-0xc]:1  local_c
;
; XREF[2]:
;   FID_conflict:__ld12tod at 1000a13f
;   FID_conflict:__ld12tod at 1000a15f
;
; Called Functions:
;   __CopyMan
;   __FillZeroMan
;   __IsZeroMan
;   __RoundMan
;   __ShrMan
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 10009f60
        ;   Label: __ld12cvt
    SUB ESP,0x18                        ; 10009f64
    MOV AX,word ptr [ECX + 0xa]         ; 10009f67
    PUSH EBX                            ; 10009f6b
    PUSH ESI                            ; 10009f6c
    XOR EBX,EBX                         ; 10009f6d
    MOV BX,AX                           ; 10009f6f
    PUSH EDI                            ; 10009f72
    PUSH EBP                            ; 10009f73
    AND EBX,0x7fff                      ; 10009f74
    SUB EBX,0x3fff                      ; 10009f7a
    XOR ESI,ESI                         ; 10009f80
    MOV SI,AX                           ; 10009f82
    MOV EDX,dword ptr [ECX + 0x2]       ; 10009f85
    AND ESI,0x8000                      ; 10009f88
    MOV EAX,dword ptr [ECX + 0x6]       ; 10009f8e
    MOV dword ptr [ESP + 0x10],EAX      ; 10009f91
    MOV dword ptr [ESP + 0x14],EDX      ; 10009f95
    XOR EAX,EAX                         ; 10009f99
    MOV AX,word ptr [ECX]               ; 10009f9b
    SHL EAX,0x10                        ; 10009f9e
    CMP EBX,0xffffc001                  ; 10009fa1
    MOV dword ptr [ESP + 0x18],EAX      ; 10009fa7
    JNZ 0x10009fe6                      ; 10009fab
        ;   XREF to: 10009fe6 (CONDITIONAL_JUMP)  ; LAB_10009fe6
    XOR EBX,EBX                         ; 10009fad
    LEA EAX,[ESP + 0x10]                ; 10009faf
    PUSH EAX                            ; 10009fb3
    CALL __IsZeroMan                    ; 10009fb4
        ;   XREF to: 10009e90 (UNCONDITIONAL_CALL)  ; undefined __IsZeroMan()
    ADD ESP,0x4                         ; 10009fb9
    TEST EAX,EAX                        ; 10009fbc
    JZ 0x10009fcb                       ; 10009fbe
        ;   XREF to: 10009fcb (CONDITIONAL_JUMP)  ; LAB_10009fcb
    XOR EAX,EAX                         ; 10009fc0
    MOV EDI,dword ptr [ESP + 0x34]      ; 10009fc2
    JMP 0x1000a0dd                      ; 10009fc6
        ;   XREF to: 1000a0dd (UNCONDITIONAL_JUMP)  ; LAB_1000a0dd
    LEA EAX,[ESP + 0x10]                ; 10009fcb
        ;   Label: LAB_10009fcb
    PUSH EAX                            ; 10009fcf
    CALL __FillZeroMan                  ; 10009fd0
        ;   XREF to: 10009e80 (UNCONDITIONAL_CALL)  ; undefined __FillZeroMan()
    MOV EDI,dword ptr [ESP + 0x38]      ; 10009fd5
    ADD ESP,0x4                         ; 10009fd9
    MOV EAX,0x2                         ; 10009fdc
    JMP 0x1000a0dd                      ; 10009fe1
        ;   XREF to: 1000a0dd (UNCONDITIONAL_JUMP)  ; LAB_1000a0dd
    LEA EAX,[ESP + 0x10]                ; 10009fe6
        ;   Label: LAB_10009fe6
    LEA ECX,[ESP + 0x1c]                ; 10009fea
    PUSH EAX                            ; 10009fee
    PUSH ECX                            ; 10009fef
    CALL __CopyMan                      ; 10009ff0
        ;   XREF to: 10009e60 (UNCONDITIONAL_CALL)  ; undefined __CopyMan()
    MOV EDI,dword ptr [ESP + 0x3c]      ; 10009ff5
    LEA EAX,[ESP + 0x18]                ; 10009ff9
    ADD ESP,0x8                         ; 10009ffd
    MOV ECX,dword ptr [EDI + 0x8]       ; 1000a000
    PUSH ECX                            ; 1000a003
    PUSH EAX                            ; 1000a004
    CALL __RoundMan                     ; 1000a005
        ;   XREF to: 10009db0 (UNCONDITIONAL_CALL)  ; undefined __RoundMan()
    ADD ESP,0x8                         ; 1000a00a
    TEST EAX,EAX                        ; 1000a00d
    JZ 0x1000a012                       ; 1000a00f
        ;   XREF to: 1000a012 (CONDITIONAL_JUMP)  ; LAB_1000a012
    INC EBX                             ; 1000a011
    MOV EBP,dword ptr [EDI + 0x4]       ; 1000a012
        ;   Label: LAB_1000a012
    MOV EAX,EBP                         ; 1000a015
    SUB EAX,dword ptr [EDI + 0x8]       ; 1000a017
    CMP EAX,EBX                         ; 1000a01a
    JLE 0x1000a037                      ; 1000a01c
        ;   XREF to: 1000a037 (CONDITIONAL_JUMP)  ; LAB_1000a037
    LEA EAX,[ESP + 0x10]                ; 1000a01e
    XOR EBX,EBX                         ; 1000a022
    PUSH EAX                            ; 1000a024
    CALL __FillZeroMan                  ; 1000a025
        ;   XREF to: 10009e80 (UNCONDITIONAL_CALL)  ; undefined __FillZeroMan()
    ADD ESP,0x4                         ; 1000a02a
    MOV EAX,0x2                         ; 1000a02d
    JMP 0x1000a0dd                      ; 1000a032
        ;   XREF to: 1000a0dd (UNCONDITIONAL_JUMP)  ; LAB_1000a0dd
    CMP EBX,EBP                         ; 1000a037
        ;   Label: LAB_1000a037
    JG 0x1000a089                       ; 1000a039
        ;   XREF to: 1000a089 (CONDITIONAL_JUMP)  ; LAB_1000a089
    SUB EBP,EBX                         ; 1000a03b
    LEA EAX,[ESP + 0x1c]                ; 1000a03d
    LEA ECX,[ESP + 0x10]                ; 1000a041
    PUSH EAX                            ; 1000a045
    PUSH ECX                            ; 1000a046
    CALL __CopyMan                      ; 1000a047
        ;   XREF to: 10009e60 (UNCONDITIONAL_CALL)  ; undefined __CopyMan()
    LEA ECX,[ESP + 0x18]                ; 1000a04c
    ADD ESP,0x8                         ; 1000a050
    PUSH EBP                            ; 1000a053
    PUSH ECX                            ; 1000a054
    CALL __ShrMan                       ; 1000a055
        ;   XREF to: 10009eb0 (UNCONDITIONAL_CALL)  ; undefined __ShrMan()
    LEA EDX,[ESP + 0x18]                ; 1000a05a
    ADD ESP,0x8                         ; 1000a05e
    MOV ECX,dword ptr [EDI + 0x8]       ; 1000a061
    PUSH ECX                            ; 1000a064
    PUSH EDX                            ; 1000a065
    CALL __RoundMan                     ; 1000a066
        ;   XREF to: 10009db0 (UNCONDITIONAL_CALL)  ; undefined __RoundMan()
    LEA ECX,[ESP + 0x18]                ; 1000a06b
    ADD ESP,0x8                         ; 1000a06f
    MOV EAX,dword ptr [EDI + 0xc]       ; 1000a072
    XOR EBX,EBX                         ; 1000a075
    INC EAX                             ; 1000a077
    PUSH EAX                            ; 1000a078
    PUSH ECX                            ; 1000a079
    CALL __ShrMan                       ; 1000a07a
        ;   XREF to: 10009eb0 (UNCONDITIONAL_CALL)  ; undefined __ShrMan()
    ADD ESP,0x8                         ; 1000a07f
    MOV EAX,0x2                         ; 1000a082
    JMP 0x1000a0dd                      ; 1000a087
        ;   XREF to: 1000a0dd (UNCONDITIONAL_JUMP)  ; LAB_1000a0dd
    CMP dword ptr [EDI],EBX             ; 1000a089
        ;   Label: LAB_1000a089
    JG 0x1000a0bf                       ; 1000a08b
        ;   XREF to: 1000a0bf (CONDITIONAL_JUMP)  ; LAB_1000a0bf
    LEA EAX,[ESP + 0x10]                ; 1000a08d
    PUSH EAX                            ; 1000a091
    CALL __FillZeroMan                  ; 1000a092
        ;   XREF to: 10009e80 (UNCONDITIONAL_CALL)  ; undefined __FillZeroMan()
    LEA ECX,[ESP + 0x14]                ; 1000a097
    MOV EAX,dword ptr [EDI + 0xc]       ; 1000a09b
    OR dword ptr [ESP + 0x14],0x80000000 ; 1000a09e
    ADD ESP,0x4                         ; 1000a0a6
    PUSH EAX                            ; 1000a0a9
    PUSH ECX                            ; 1000a0aa
    CALL __ShrMan                       ; 1000a0ab
        ;   XREF to: 10009eb0 (UNCONDITIONAL_CALL)  ; undefined __ShrMan()
    ADD ESP,0x8                         ; 1000a0b0
    MOV EBX,dword ptr [EDI + 0x14]      ; 1000a0b3
    ADD EBX,dword ptr [EDI]             ; 1000a0b6
    MOV EAX,0x1                         ; 1000a0b8
    JMP 0x1000a0dd                      ; 1000a0bd
        ;   XREF to: 1000a0dd (UNCONDITIONAL_JUMP)  ; LAB_1000a0dd
    ADD EBX,dword ptr [EDI + 0x14]      ; 1000a0bf
        ;   Label: LAB_1000a0bf
    MOV ECX,dword ptr [EDI + 0xc]       ; 1000a0c2
    LEA EAX,[ESP + 0x10]                ; 1000a0c5
    PUSH ECX                            ; 1000a0c9
    AND dword ptr [ESP + 0x14],0x7fffffff ; 1000a0ca
    PUSH EAX                            ; 1000a0d2
    CALL __ShrMan                       ; 1000a0d3
        ;   XREF to: 10009eb0 (UNCONDITIONAL_CALL)  ; undefined __ShrMan()
    ADD ESP,0x8                         ; 1000a0d8
    XOR EAX,EAX                         ; 1000a0db
    MOV CL,0x1f                         ; 1000a0dd
        ;   Label: LAB_1000a0dd
    SUB CL,byte ptr [EDI + 0xc]         ; 1000a0df
    SHL EBX,CL                          ; 1000a0e2
    MOV ECX,0x0                         ; 1000a0e4
    CMP ESI,0x1                         ; 1000a0e9
    ADC ECX,-0x1                        ; 1000a0ec
    AND ECX,0x80000000                  ; 1000a0ef
    OR EBX,ECX                          ; 1000a0f5
    MOV ECX,dword ptr [EDI + 0x10]      ; 1000a0f7
    OR EBX,dword ptr [ESP + 0x10]       ; 1000a0fa
    CMP ECX,0x40                        ; 1000a0fe
    JNZ 0x1000a118                      ; 1000a101
        ;   XREF to: 1000a118 (CONDITIONAL_JUMP)  ; LAB_1000a118
    MOV EDX,dword ptr [ESP + 0x30]      ; 1000a103
    MOV ECX,dword ptr [ESP + 0x14]      ; 1000a107
    POP EBP                             ; 1000a10b
    POP EDI                             ; 1000a10c
    POP ESI                             ; 1000a10d
    MOV dword ptr [EDX + 0x4],EBX       ; 1000a10e
    POP EBX                             ; 1000a111
    MOV dword ptr [EDX],ECX             ; 1000a112
    ADD ESP,0x18                        ; 1000a114
    RET                                 ; 1000a117
    CMP ECX,0x20                        ; 1000a118
        ;   Label: LAB_1000a118
    JNZ 0x1000a123                      ; 1000a11b
        ;   XREF to: 1000a123 (CONDITIONAL_JUMP)  ; LAB_1000a123
    MOV EDX,dword ptr [ESP + 0x30]      ; 1000a11d
    MOV dword ptr [EDX],EBX             ; 1000a121
    POP EBP                             ; 1000a123
        ;   Label: LAB_1000a123
    POP EDI                             ; 1000a124
    POP ESI                             ; 1000a125
    POP EBX                             ; 1000a126
    ADD ESP,0x18                        ; 1000a127
    RET                                 ; 1000a12a

