; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bird_cpp_CBird_processDamage_FUN_00415910(CBird *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBird *          Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 DAT_005d3d6a
;   undefined4 DAT_005d3d6e
;   CDemonActorType g_CBirdClassInfo
;
; Called Functions:
;   core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0
;   core_charactr.cpp_CCharacter_processDamage_FUN_004319e0
;   unkafter_bird.cpp_FUN_00415830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415910
        ;   Label: core_bird.cpp_CBird_processDamage_FUN_00415910
    PUSH ESI                            ; 00415911
    PUSH EDI                            ; 00415912
    MOV EBX,dword ptr [ESP + 0x10]      ; 00415913
    MOV EDI,dword ptr [ESP + 0x14]      ; 00415917
    PUSH EBX                            ; 0041591b
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041591c
    CALL dword ptr [EAX + 0xcc]         ; 00415922
    ADD ESP,0x4                         ; 00415928
    CMP EAX,0x7c3910                    ; 0041592b | g_CBirdClassInfo
    JNZ 0x00415973                      ; 00415930
        ;   XREF to: 00415973 (CONDITIONAL_JUMP)  ; LAB_00415973
    FLD float ptr [EDI + 0x4]           ; 00415932
    FSUBR float ptr [EBX + 0x2538]      ; 00415935
    LEA ESI,[EBX + 0x158]               ; 0041593b
    FST float ptr [EBX + 0x2538]        ; 00415941
    FLDZ                                ; 00415947
    FCOMPP                              ; 00415949
    FNSTSW AX                           ; 0041594b
    SAHF                                ; 0041594d
    JNC 0x00415981                      ; 0041594e
        ;   XREF to: 00415981 (CONDITIONAL_JUMP)  ; LAB_00415981
    FLD float ptr [EDI + 0x4]           ; 00415950
    FLDZ                                ; 00415953
    FCOMPP                              ; 00415955
    FNSTSW AX                           ; 00415957
    SAHF                                ; 00415959
    JNC 0x00415973                      ; 0041595a
        ;   XREF to: 00415973 (CONDITIONAL_JUMP)  ; LAB_00415973
    CMP dword ptr [EBX + 0x26fc],0x0    ; 0041595c
    JNZ 0x00415973                      ; 00415963
        ;   XREF to: 00415973 (CONDITIONAL_JUMP)  ; LAB_00415973
    PUSH 0x5d3d6e                       ; 00415965 | DAT_005d3d6e
    PUSH ESI                            ; 0041596a
        ;   Label: LAB_0041596a
    CALL unkafter_bird.cpp_FUN_00415830 ; 0041596b
        ;   XREF to: 00415830 (UNCONDITIONAL_CALL)  ; undefined unkafter_bird.cpp_FUN_00415830()
    ADD ESP,0x8                         ; 00415970
    PUSH EDI                            ; 00415973
        ;   Label: LAB_00415973
    PUSH EBX                            ; 00415974
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_004319e0 ; 00415975
        ;   XREF to: 004319e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_004319e0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0041597a
    POP EDI                             ; 0041597d
    POP ESI                             ; 0041597e
    POP EBX                             ; 0041597f
    RET                                 ; 00415980
    PUSH 0x41c80000                     ; 00415981
        ;   Label: LAB_00415981
    PUSH 0x32                           ; 00415986
    MOV EAX,dword ptr [EBX + 0x154]     ; 00415988
    PUSH EBX                            ; 0041598e
    MOV dword ptr [EBX + 0x2538],0x0    ; 0041598f
    CALL dword ptr [EAX + 0xa8]         ; 00415999
    ADD ESP,0xc                         ; 0041599f
    PUSH EBX                            ; 004159a2
    CALL core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0 ; 004159a3
        ;   XREF to: 004328c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004159a8
    PUSH 0x5d3d6a                       ; 004159ab | DAT_005d3d6a
    JMP 0x0041596a                      ; 004159b0
        ;   XREF to: 0041596a (UNCONDITIONAL_JUMP)  ; LAB_0041596a

