; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_bodypart_cpp_FUN_0041ae50(void)
;
; Local Variables:
; undefined1       Stack[-0x18]:1  local_18
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_FUN_0042bd30 at 0042bf1a
;
; Referenced Globals:
;   TerminatedCString s_CHAR2_RAW_00615e60
;   undefined4 s_HAR2.RAW_00615e61
;   undefined4 s_AR2.RAW_00615e62
;   undefined4 s_R2.RAW_00615e63
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_flame.cpp_FUN_004c9b90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041ae50
        ;   Label: core_bodypart.cpp_FUN_0041ae50
    PUSH EBP                            ; 0041ae51
    SUB ESP,0x10                        ; 0041ae52
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0041ae55
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041ae59
    MOV EDX,dword ptr [EBX + 0x74c]     ; 0041ae5d
    CMP EDX,0x2                         ; 0041ae63
    JGE 0x0041af82                      ; 0041ae66
        ;   XREF to: 0041af82 (CONDITIONAL_JUMP)  ; LAB_0041af82
    PUSH EDI                            ; 0041ae6c
    PUSH ESI                            ; 0041ae6d
    MOV EDI,EDX                         ; 0041ae6e
    IMUL EDX,EDX,0x2b0                  ; 0041ae70
    LEA ESI,[EBX + 0x750]               ; 0041ae76
    INC EDI                             ; 0041ae7c
    ADD ESI,EDX                         ; 0041ae7d
    MOV dword ptr [EBX + 0x74c],EDI     ; 0041ae7f
    CMP ESI,EAX                         ; 0041ae85
    JZ 0x0041ae99                       ; 0041ae87
        ;   XREF to: 0041ae99 (CONDITIONAL_JUMP)  ; LAB_0041ae99
    MOV EDX,dword ptr [EAX]             ; 0041ae89
    MOV dword ptr [ESI],EDX             ; 0041ae8b
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041ae8d
    MOV dword ptr [ESI + 0x4],EDX       ; 0041ae90
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041ae93
    MOV dword ptr [ESI + 0x8],EDX       ; 0041ae96
    PUSH ESI                            ; 0041ae99
        ;   Label: LAB_0041ae99
    LEA EAX,[ESP + 0xc]                 ; 0041ae9a
    PUSH EAX                            ; 0041ae9e
    PUSH EBX                            ; 0041ae9f
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0041aea0
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    LEA EDX,[ESI + 0x2c]                ; 0041aea5
    FLD float ptr [EAX]                 ; 0041aea8
    ADD ESP,0xc                         ; 0041aeaa
    FSTP float ptr [EDX]                ; 0041aead
    MOV ECX,dword ptr [EAX + 0x4]       ; 0041aeaf
    MOV dword ptr [EDX + 0x4],ECX       ; 0041aeb2
    FLD float ptr [EAX + 0x8]           ; 0041aeb5
    LEA EAX,[ESI + 0xc]                 ; 0041aeb8
    PUSH EAX                            ; 0041aebb
    FSTP float ptr [EDX + 0x8]          ; 0041aebc
    CALL core_flame.cpp_FUN_004c9b90    ; 0041aebf
        ;   XREF to: 004c9b90 (UNCONDITIONAL_CALL)  ; undefined core_flame.cpp_FUN_004c9b90()
    MOV dword ptr [ESI + 0x1b8],0x0     ; 0041aec4
    MOV dword ptr [ESI + 0x164],0x3fc00000 ; 0041aece
    MOV dword ptr [ESI + 0x168],0x40400000 ; 0041aed8
    LEA EDI,[EBX + 0x198]               ; 0041aee2
    MOV dword ptr [ESI + 0x16c],0x3fc00000 ; 0041aee8
    ADD ESP,0x4                         ; 0041aef2
    MOV dword ptr [EBX + 0xfc],0x1      ; 0041aef5
    MOV ESI,0x615e60                    ; 0041aeff | = "CHAR2.RAW"
    MOV dword ptr [EBX + 0x18c],0x1     ; 0041af04
    PUSH EDI                            ; 0041af0e
    MOV AL,byte ptr [ESI]               ; 0041af0f | = "CHAR2.RAW" | s_AR2.RAW_00615e62
        ;   Label: LAB_0041af0f
    MOV byte ptr [EDI],AL               ; 0041af11
    CMP AL,0x0                          ; 0041af13
    JZ 0x0041af27                       ; 0041af15
        ;   XREF to: 0041af27 (CONDITIONAL_JUMP)  ; LAB_0041af27
    MOV AL,byte ptr [ESI + 0x1]         ; 0041af17 | s_HAR2.RAW_00615e61 | s_R2.RAW_00615e63
    ADD ESI,0x2                         ; 0041af1a
    MOV byte ptr [EDI + 0x1],AL         ; 0041af1d
    ADD EDI,0x2                         ; 0041af20
    CMP AL,0x0                          ; 0041af23
    JNZ 0x0041af0f                      ; 0041af25
        ;   XREF to: 0041af0f (CONDITIONAL_JUMP)  ; LAB_0041af0f
    POP EDI                             ; 0041af27
        ;   Label: LAB_0041af27
    MOV EBP,dword ptr [EBX + 0x180]     ; 0041af28
    XOR EDX,EDX                         ; 0041af2e
    TEST EBP,EBP                        ; 0041af30
    JLE 0x0041af60                      ; 0041af32
        ;   XREF to: 0041af60 (CONDITIONAL_JUMP)  ; LAB_0041af60
    XOR EAX,EAX                         ; 0041af34
    MOV ECX,dword ptr [EBX + 0x188]     ; 0041af36
        ;   Label: LAB_0041af36
    MOV dword ptr [ECX + EAX*0x1],0x0   ; 0041af3c
    INC EDX                             ; 0041af43
    MOV ECX,dword ptr [EBX + 0x180]     ; 0041af44
    ADD EAX,0x4                         ; 0041af4a
    CMP EDX,ECX                         ; 0041af4d
    JL 0x0041af36                       ; 0041af4f
        ;   XREF to: 0041af36 (CONDITIONAL_JUMP)  ; LAB_0041af36
    LEA EAX,[EAX]                       ; 0041af51
    LEA EDX,[EDX]                       ; 0041af57
    LEA EAX,[EAX]                       ; 0041af5d
    PUSH 0x41a00000                     ; 0041af60
        ;   Label: LAB_0041af60
    PUSH 0x41400000                     ; 0041af65
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 0041af6a
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    ADD ESP,0x10                        ; 0041af82
        ;   Label: LAB_0041af82
    POP EBP                             ; 0041af85
    POP EBX                             ; 0041af86
    RET                                 ; 0041af87

