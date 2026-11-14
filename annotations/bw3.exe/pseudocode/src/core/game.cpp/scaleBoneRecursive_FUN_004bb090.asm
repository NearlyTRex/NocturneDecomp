; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_scaleBoneRecursive_FUN_004bb090(CDeformableModelInstance *model_instance,CSkeleton *skeleton,float scale_factor,int bone_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   model_instance
; CSkeleton *      Stack[0x8]:4   skeleton
; float            Stack[0xc]:4   scale_factor
; int              Stack[0x10]:4   bone_index
;
; XREF[1]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004bb100 at 004bd09c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb090
        ;   Label: core_game.cpp_scaleBoneRecursive_FUN_004bb090
    PUSH ESI                            ; 004bb091
    PUSH EDI                            ; 004bb092
    PUSH EBP                            ; 004bb093
    MOV EDI,dword ptr [ESP + 0x18]      ; 004bb094
    MOV EBP,dword ptr [ESP + 0x20]      ; 004bb098
    MOV EDX,dword ptr [ESP + 0x14]      ; 004bb09c
    LEA EBX,[EBP*0x4 + 0x0]             ; 004bb0a0
    ADD EBX,EDX                         ; 004bb0a7
    FLD float ptr [EBX + 0x514]         ; 004bb0a9
    FMUL float ptr [ESP + 0x1c]         ; 004bb0af
    FSTP float ptr [EBX + 0x514]        ; 004bb0b3
    MOV ECX,dword ptr [EDI + 0x1de78]   ; 004bb0b9
    XOR EBX,EBX                         ; 004bb0bf
    TEST ECX,ECX                        ; 004bb0c1
    JLE 0x004bb0dd                      ; 004bb0c3
        ;   XREF to: 004bb0dd (CONDITIONAL_JUMP)  ; LAB_004bb0dd
    MOV ESI,EDI                         ; 004bb0c5
    CMP EBP,dword ptr [ESI + 0x1de9c]   ; 004bb0c7
        ;   Label: LAB_004bb0c7
    JZ 0x004bb0e2                       ; 004bb0cd
        ;   XREF to: 004bb0e2 (CONDITIONAL_JUMP)  ; LAB_004bb0e2
    INC EBX                             ; 004bb0cf
        ;   Label: LAB_004bb0cf
    MOV EAX,dword ptr [EDI + 0x1de78]   ; 004bb0d0
    ADD ESI,0x24                        ; 004bb0d6
    CMP EBX,EAX                         ; 004bb0d9
    JL 0x004bb0c7                       ; 004bb0db
        ;   XREF to: 004bb0c7 (CONDITIONAL_JUMP)  ; LAB_004bb0c7
    POP EBP                             ; 004bb0dd
        ;   Label: LAB_004bb0dd
    POP EDI                             ; 004bb0de
    POP ESI                             ; 004bb0df
    POP EBX                             ; 004bb0e0
    RET                                 ; 004bb0e1
    PUSH EBX                            ; 004bb0e2
        ;   Label: LAB_004bb0e2
    PUSH dword ptr [ESP + 0x20]         ; 004bb0e3
    PUSH EDI                            ; 004bb0e7
    MOV ECX,dword ptr [ESP + 0x20]      ; 004bb0e8
    PUSH ECX                            ; 004bb0ec
    CALL core_game.cpp_scaleBoneRecursive_FUN_004bb090 ; 004bb0ed
        ;   XREF to: 004bb090 (UNCONDITIONAL_CALL)  ; void core_game.cpp_scaleBoneRecursive_FUN_004bb090(CDeformableModelInstance * model_instance, CSkeleton * skeleton, float scale_factor, int bone_index)
    ADD ESP,0x10                        ; 004bb0f2
    JMP 0x004bb0cf                      ; 004bb0f5
        ;   XREF to: 004bb0cf (UNCONDITIONAL_JUMP)  ; LAB_004bb0cf

