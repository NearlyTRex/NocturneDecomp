; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00447810(int param_1)
;
;
; Called Functions:
;   FUN_005395d0
;   FUN_005b7ed0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447810
        ;   Label: FUN_00447810
    PUSH ESI                            ; 00447811
    PUSH EDI                            ; 00447812
    SUB ESP,0x10                        ; 00447813
    MOV EBX,dword ptr [ESP + 0x20]      ; 00447816
    LEA EAX,[EBX + 0x328]               ; 0044781a
    LEA EDX,[EBX + 0x20]                ; 00447820
    MOV ECX,EAX                         ; 00447823
    CMP EAX,EDX                         ; 00447825
    JNZ 0x0044788b                      ; 00447827
        ;   XREF to: 0044788b (CONDITIONAL_JUMP)  ; LAB_0044788b
    LEA EAX,[EBX + 0x31c]               ; 00447829
        ;   Label: LAB_00447829
    CMP EAX,ECX                         ; 0044782f
    JZ 0x00447843                       ; 00447831
        ;   XREF to: 00447843 (CONDITIONAL_JUMP)  ; LAB_00447843
    MOV EDX,dword ptr [ECX]             ; 00447833
    MOV dword ptr [EAX],EDX             ; 00447835
    MOV EDX,dword ptr [ECX + 0x4]       ; 00447837
    MOV dword ptr [EAX + 0x4],EDX       ; 0044783a
    MOV EDX,dword ptr [ECX + 0x8]       ; 0044783d
    MOV dword ptr [EAX + 0x8],EDX       ; 00447840
    LEA EAX,[EBX + 0x30]                ; 00447843
        ;   Label: LAB_00447843
    PUSH EAX                            ; 00447846
    LEA ESI,[ESP + 0x4]                 ; 00447847
    CALL FUN_005b7ed0                   ; 0044784b
        ;   XREF to: 005b7ed0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ed0()
    LEA ESI,[ESP + 0x4]                 ; 00447850
    LEA EDI,[EBX + 0x344]               ; 00447854
    ADD ESP,0x4                         ; 0044785a
    MOVSD ES:EDI,ESI                    ; 0044785d
    MOVSD ES:EDI,ESI                    ; 0044785e
    MOVSD ES:EDI,ESI                    ; 0044785f
    MOVSD ES:EDI,ESI                    ; 00447860
    LEA EDI,[EBX + 0x334]               ; 00447861
    LEA ESI,[EBX + 0x344]               ; 00447867
    PUSH EBX                            ; 0044786d
    MOVSD ES:EDI,ESI                    ; 0044786e
    MOVSD ES:EDI,ESI                    ; 0044786f
    MOVSD ES:EDI,ESI                    ; 00447870
    MOVSD ES:EDI,ESI                    ; 00447871
    CALL FUN_005395d0                   ; 00447872
        ;   XREF to: 005395d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005395d0()
    ADD ESP,0x4                         ; 00447877
    MOV dword ptr [EBX + 0xfc],0x1      ; 0044787a
    ADD ESP,0x10                        ; 00447884
    POP EDI                             ; 00447887
    POP ESI                             ; 00447888
    POP EBX                             ; 00447889
    RET                                 ; 0044788a
    MOV ESI,dword ptr [EDX]             ; 0044788b
        ;   Label: LAB_0044788b
    MOV dword ptr [EAX],ESI             ; 0044788d
    MOV ESI,dword ptr [EDX + 0x4]       ; 0044788f
    MOV dword ptr [EAX + 0x4],ESI       ; 00447892
    MOV ESI,dword ptr [EDX + 0x8]       ; 00447895
    MOV dword ptr [EAX + 0x8],ESI       ; 00447898
    JMP 0x00447829                      ; 0044789b
        ;   XREF to: 00447829 (UNCONDITIONAL_JUMP)  ; LAB_00447829

