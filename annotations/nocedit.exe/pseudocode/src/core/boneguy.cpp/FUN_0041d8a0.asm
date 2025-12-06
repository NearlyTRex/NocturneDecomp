; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_boneguy.cpp_FUN_0041d8a0()
;
; Local Variables:
; undefined1       Stack[-0x24]:1  local_24
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_boneguy.cpp_FUN_0041bf90 at 0041c054
;
; Referenced Globals:
;   TerminatedCString s_boneguy_comeback_wav_00616358
;
; Called Functions:
;   core_xform.cpp_eulerToQuaternion_FUN_005f7b20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d8a0
        ;   Label: core_boneguy.cpp_FUN_0041d8a0
    PUSH ESI                            ; 0041d8a1
    PUSH EDI                            ; 0041d8a2
    PUSH EBP                            ; 0041d8a3
    SUB ESP,0x14                        ; 0041d8a4
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041d8a7
    XOR EDX,EDX                         ; 0041d8ab
    MOV ECX,dword ptr [EAX + 0xbf38]    ; 0041d8ad
    MOV dword ptr [ESP + 0x10],EDX      ; 0041d8b3
    TEST ECX,ECX                        ; 0041d8b7
    JLE 0x0041d938                      ; 0041d8b9 | LAB_0041d938
        ;   XREF to: 0041d938 (CONDITIONAL_JUMP)
    LEA EBP,[EAX + 0xbf74]              ; 0041d8bf
    MOV EBX,EAX                         ; 0041d8c5
    MOV EAX,dword ptr [EBX + 0xbf80]    ; 0041d8c7
        ;   Label: LAB_0041d8c7
    ADD EAX,0x30                        ; 0041d8cd
    PUSH EAX                            ; 0041d8d0
    LEA ESI,[ESP + 0x4]                 ; 0041d8d1
    CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20 ; 0041d8d5 | CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CQuaternion4f * quat_out, CVector3f * euler_angles)
        ;   XREF to: 005f7b20 (UNCONDITIONAL_CALL)
    LEA ESI,[ESP + 0x4]                 ; 0041d8da
    LEA EDI,[EBX + 0xbf54]              ; 0041d8de
    ADD ESP,0x4                         ; 0041d8e4
    MOVSD ES:EDI,ESI                    ; 0041d8e7
    MOVSD ES:EDI,ESI                    ; 0041d8e8
    MOVSD ES:EDI,ESI                    ; 0041d8e9
    MOVSD ES:EDI,ESI                    ; 0041d8ea
    MOV EAX,dword ptr [EBX + 0xbf80]    ; 0041d8eb
    MOV dword ptr [EAX + 0xf20],0x0     ; 0041d8f1
    MOV EAX,dword ptr [EBX + 0xbf80]    ; 0041d8fb
    ADD EAX,0x20                        ; 0041d901
    CMP EBP,EAX                         ; 0041d904
    JZ 0x0041d919                       ; 0041d906 | LAB_0041d919
        ;   XREF to: 0041d919 (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [EAX]             ; 0041d908
    MOV dword ptr [EBP],EDX             ; 0041d90a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041d90d
    MOV dword ptr [EBP + 0x4],EDX       ; 0041d910
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041d913
    MOV dword ptr [EBP + 0x8],EDX       ; 0041d916
    MOV ESI,dword ptr [ESP + 0x10]      ; 0041d919
        ;   Label: LAB_0041d919
    INC ESI                             ; 0041d91d
    MOV dword ptr [ESP + 0x10],ESI      ; 0041d91e
    MOV EAX,ESI                         ; 0041d922
    MOV ESI,dword ptr [ESP + 0x28]      ; 0041d924
    ADD EBP,0x48                        ; 0041d928
    MOV EDI,dword ptr [ESI + 0xbf38]    ; 0041d92b
    ADD EBX,0x48                        ; 0041d931
    CMP EAX,EDI                         ; 0041d934
    JL 0x0041d8c7                       ; 0041d936 | LAB_0041d8c7
        ;   XREF to: 0041d8c7 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041d938
        ;   Label: LAB_0041d938
    PUSH 0x616358                       ; 0041d93c | = "boneguy-comeback.wav" | s_boneguy_comeback_wav_00616358 = boneguy-comeback.wav
    MOV dword ptr [EAX + 0xc4dc],0x2    ; 0041d941
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0041d94b
    MOV dword ptr [EAX + 0xc4e0],0x0    ; 0041d94f
    PUSH EBP                            ; 0041d959
    MOV EAX,dword ptr [EAX + 0x154]     ; 0041d95a
    CALL dword ptr [EAX + 0x24]         ; 0041d960
    ADD ESP,0x8                         ; 0041d963
    ADD ESP,0x14                        ; 0041d966
    POP EBP                             ; 0041d969
    POP EDI                             ; 0041d96a
    POP ESI                             ; 0041d96b
    POP EBX                             ; 0041d96c
    RET                                 ; 0041d96d

