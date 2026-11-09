; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_FUN_004b9060(CDeformableModelInstance *model_instance,CSkeleton *skeleton,float scale_factor,int bone_index)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   model_instance
; CSkeleton *      Stack[0x8]:4   skeleton
; float            Stack[0xc]:4   scale_factor
; int              Stack[0x10]:4   bone_index
;
; XREF[1]:
;   core_game.cpp_FUN_004b90d0 at 004bacba
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b9060
        ;   Label: core_game.cpp_FUN_004b9060
    PUSH ESI                            ; 004b9061
    PUSH EDI                            ; 004b9062
    PUSH EBP                            ; 004b9063
    MOV EDI,dword ptr [ESP + 0x18]      ; 004b9064
    MOV EBP,dword ptr [ESP + 0x20]      ; 004b9068
    MOV EDX,dword ptr [ESP + 0x14]      ; 004b906c
    LEA EBX,[EBP*0x4 + 0x0]             ; 004b9070
    ADD EBX,EDX                         ; 004b9077
    FLD float ptr [EBX + 0x514]         ; 004b9079
    FMUL float ptr [ESP + 0x1c]         ; 004b907f
    FSTP float ptr [EBX + 0x514]        ; 004b9083
    MOV ECX,dword ptr [EDI + 0x1d1f8]   ; 004b9089
    XOR EBX,EBX                         ; 004b908f
    TEST ECX,ECX                        ; 004b9091
    JLE 0x004b90ad                      ; 004b9093
        ;   XREF to: 004b90ad (CONDITIONAL_JUMP)  ; LAB_004b90ad
    MOV ESI,EDI                         ; 004b9095
    CMP EBP,dword ptr [ESI + 0x1d21c]   ; 004b9097
        ;   Label: LAB_004b9097
    JZ 0x004b90b2                       ; 004b909d
        ;   XREF to: 004b90b2 (CONDITIONAL_JUMP)  ; LAB_004b90b2
    INC EBX                             ; 004b909f
        ;   Label: LAB_004b909f
    MOV EAX,dword ptr [EDI + 0x1d1f8]   ; 004b90a0
    ADD ESI,0x24                        ; 004b90a6
    CMP EBX,EAX                         ; 004b90a9
    JL 0x004b9097                       ; 004b90ab
        ;   XREF to: 004b9097 (CONDITIONAL_JUMP)  ; LAB_004b9097
    POP EBP                             ; 004b90ad
        ;   Label: LAB_004b90ad
    POP EDI                             ; 004b90ae
    POP ESI                             ; 004b90af
    POP EBX                             ; 004b90b0
    RET                                 ; 004b90b1
    PUSH EBX                            ; 004b90b2
        ;   Label: LAB_004b90b2
    PUSH dword ptr [ESP + 0x20]         ; 004b90b3
    PUSH EDI                            ; 004b90b7
    MOV ECX,dword ptr [ESP + 0x20]      ; 004b90b8
    PUSH ECX                            ; 004b90bc
    CALL core_game.cpp_FUN_004b9060     ; 004b90bd
        ;   XREF to: 004b9060 (UNCONDITIONAL_CALL)  ; void core_game.cpp_FUN_004b9060(CDeformableModelInstance * model_instance, CSkeleton * skeleton, float scale_factor, int bone_index)
    ADD ESP,0x10                        ; 004b90c2
    JMP 0x004b909f                      ; 004b90c5
        ;   XREF to: 004b909f (UNCONDITIONAL_JUMP)  ; LAB_004b909f

