; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_scaleBoneRecursive_FUN_004d2740(CDeformableModelInstance *model_instance,CSkeleton *skeleton,float scale_factor,int bone_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   model_instance
; CSkeleton *      Stack[0x8]:4   skeleton
; float            Stack[0xc]:4   scale_factor
; int              Stack[0x10]:4   bone_index
;
; XREF[1]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004d27b0 at 004d4f16
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2740
        ;   Label: core_game.cpp_scaleBoneRecursive_FUN_004d2740
    PUSH ESI                            ; 004d2741
    PUSH EDI                            ; 004d2742
    PUSH EBP                            ; 004d2743
    MOV EDI,dword ptr [ESP + 0x18]      ; 004d2744
    MOV EBP,dword ptr [ESP + 0x20]      ; 004d2748
    MOV EDX,dword ptr [ESP + 0x14]      ; 004d274c
    LEA EBX,[EBP*0x4 + 0x0]             ; 004d2750
    ADD EBX,EDX                         ; 004d2757
    FLD float ptr [EBX + 0x514]         ; 004d2759
    FMUL float ptr [ESP + 0x1c]         ; 004d275f
    FSTP float ptr [EBX + 0x514]        ; 004d2763
    MOV ECX,dword ptr [EDI + 0x1de78]   ; 004d2769
    XOR EBX,EBX                         ; 004d276f
    TEST ECX,ECX                        ; 004d2771
    JLE 0x004d278d                      ; 004d2773
        ;   XREF to: 004d278d (CONDITIONAL_JUMP)  ; LAB_004d278d
    MOV ESI,EDI                         ; 004d2775
    CMP EBP,dword ptr [ESI + 0x1de9c]   ; 004d2777
        ;   Label: LAB_004d2777
    JZ 0x004d2792                       ; 004d277d
        ;   XREF to: 004d2792 (CONDITIONAL_JUMP)  ; LAB_004d2792
    INC EBX                             ; 004d277f
        ;   Label: LAB_004d277f
    MOV EAX,dword ptr [EDI + 0x1de78]   ; 004d2780
    ADD ESI,0x24                        ; 004d2786
    CMP EBX,EAX                         ; 004d2789
    JL 0x004d2777                       ; 004d278b
        ;   XREF to: 004d2777 (CONDITIONAL_JUMP)  ; LAB_004d2777
    POP EBP                             ; 004d278d
        ;   Label: LAB_004d278d
    POP EDI                             ; 004d278e
    POP ESI                             ; 004d278f
    POP EBX                             ; 004d2790
    RET                                 ; 004d2791
    PUSH EBX                            ; 004d2792
        ;   Label: LAB_004d2792
    PUSH dword ptr [ESP + 0x20]         ; 004d2793
    PUSH EDI                            ; 004d2797
    MOV ECX,dword ptr [ESP + 0x20]      ; 004d2798
    PUSH ECX                            ; 004d279c
    CALL core_game.cpp_scaleBoneRecursive_FUN_004d2740 ; 004d279d
        ;   XREF to: 004d2740 (UNCONDITIONAL_CALL)  ; void core_game.cpp_scaleBoneRecursive_FUN_004d2740(CDeformableModelInstance * model_instance, CSkeleton * skeleton, float scale_factor, int bone_index)
    ADD ESP,0x10                        ; 004d27a2
    JMP 0x004d277f                      ; 004d27a5
        ;   XREF to: 004d277f (UNCONDITIONAL_JUMP)  ; LAB_004d277f

