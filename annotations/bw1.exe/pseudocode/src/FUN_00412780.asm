; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00412780(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fc170
;   undefined4 DAT_005fc174
;
; Called Functions:
;   FUN_004a0410
;   FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412780
        ;   Label: FUN_00412780
    PUSH ESI                            ; 00412781
    PUSH EDI                            ; 00412782
    MOV EDX,dword ptr [ESP + 0x10]      ; 00412783
    PUSH EDX                            ; 00412787
    CALL FUN_004a0410                   ; 00412788
        ;   XREF to: 004a0410 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0410()
    ADD ESP,0x4                         ; 0041278d
    MOV EBX,EAX                         ; 00412790
    PUSH 0x5d38d9                       ; 00412792
    ADD EAX,0x158                       ; 00412797
    MOV ESI,0x5d38e4                    ; 0041279c
    PUSH EAX                            ; 004127a1
    MOV dword ptr [EAX + -0x4],0x5fc184 ; 004127a2
    LEA EDI,[EBX + 0xc26c]              ; 004127a9
    CALL FUN_00569f50                   ; 004127af
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    FLD float ptr [0x005fc170]          ; 004127b4 | DAT_005fc170
    MOV dword ptr [EBX + 0x2fec],0x3f19999a ; 004127ba
    FLD float ptr [0x005fc174]          ; 004127c4 | DAT_005fc174
    MOV dword ptr [EBX + 0x2ff0],0x40000000 ; 004127ca
    ADD ESP,0x8                         ; 004127d4
    FXCH                                ; 004127d7
    FSTP float ptr [EBX + 0x2ff4]       ; 004127d9
    FSTP float ptr [EBX + 0x2ff8]       ; 004127df
    PUSH EDI                            ; 004127e5
    MOV AL,byte ptr [ESI]               ; 004127e6
        ;   Label: LAB_004127e6
    MOV byte ptr [EDI],AL               ; 004127e8
    CMP AL,0x0                          ; 004127ea
    JZ 0x004127fe                       ; 004127ec
        ;   XREF to: 004127fe (CONDITIONAL_JUMP)  ; LAB_004127fe
    MOV AL,byte ptr [ESI + 0x1]         ; 004127ee
    ADD ESI,0x2                         ; 004127f1
    MOV byte ptr [EDI + 0x1],AL         ; 004127f4
    ADD EDI,0x2                         ; 004127f7
    CMP AL,0x0                          ; 004127fa
    JNZ 0x004127e6                      ; 004127fc
        ;   XREF to: 004127e6 (CONDITIONAL_JUMP)  ; LAB_004127e6
    POP EDI                             ; 004127fe
        ;   Label: LAB_004127fe
    MOV dword ptr [EBX + 0xc308],0x0    ; 004127ff
    LEA EAX,[EBX + 0xc310]              ; 00412809
    MOV dword ptr [EBX + 0xc30c],0x0    ; 0041280f
    MOV dword ptr [EAX + 0x8],0x0       ; 00412819
    MOV EDX,dword ptr [EAX + 0x8]       ; 00412820
    MOV dword ptr [EAX + 0x4],EDX       ; 00412823
    MOV EDX,dword ptr [EAX + 0x4]       ; 00412826
    MOV dword ptr [EAX],EDX             ; 00412829
    MOV EAX,EBX                         ; 0041282b
    MOV dword ptr [EBX + 0xc268],0x0    ; 0041282d
    POP EDI                             ; 00412837
    POP ESI                             ; 00412838
    POP EBX                             ; 00412839
    RET                                 ; 0041283a

