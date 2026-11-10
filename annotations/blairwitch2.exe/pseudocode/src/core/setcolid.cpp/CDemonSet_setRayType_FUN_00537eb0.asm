; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setcolid_cpp_CDemonSet_setRayType_FUN_00537eb0(CDemonSet *this_ptr,int ray_type)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   ray_type
;
; XREF[17]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a050 at 0040a83c
;   core_confedrt.cpp_FUN_005a14e0 at 005a17f5
;   core_crossbow.cpp_CCrossbow_fire_FUN_0043a7a0 at 0043a963
;   core_doc.cpp_CDoc_renderOpaque_FUN_004599a0 at 00459a37
;   core_elephant.cpp_CElephantGun_fire_FUN_00485b40 at 00485dfb
;   core_gabriela.cpp_CGabriella_scoreTargetVisibility_FUN_004b11a0 at 004b1488
;   core_gabriela.cpp_FUN_004aeb00 at 004af153
;   core_game.cpp_FUN_004be8a0 at 004bee30
;   core_gun.cpp_CGun_fire_FUN_004cbdc0 at 004cbfa9
;   core_scat.cpp_FUN_00520a60 at 00520d48
;   ... and 7 more
;
; Referenced Globals:
;   TerminatedCString s_core_setcolid_cpp_005e5f18
;   TerminatedCString s_CDemonSet_setRayType_use_005e5f2d
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00537eb0
        ;   Label: core_setcolid.cpp_CDemonSet_setRayType_FUN_00537eb0
    MOV EDX,dword ptr [ESP + 0x8]       ; 00537eb4
    MOV dword ptr [EAX + 0x15f694],EDX  ; 00537eb8
    CMP EDX,0x3                         ; 00537ebe
    JZ 0x00537ec4                       ; 00537ec1
        ;   XREF to: 00537ec4 (CONDITIONAL_JUMP)  ; LAB_00537ec4
    RET                                 ; 00537ec3
    PUSH EBX                            ; 00537ec4
        ;   Label: LAB_00537ec4
    MOV ECX,0x5e5f18                    ; 00537ec5 | = "..\\core\\setcolid.cpp"
    MOV EBX,0x49a                       ; 00537eca
    PUSH 0x5e5f2d                       ; 00537ecf | = "CDemonSet::setRayType - use setRayTyp..."
    MOV dword ptr [0x01d046a0],ECX      ; 00537ed4 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 00537eda | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00537ee0
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00537ee5
    POP EBX                             ; 00537ee8
    RET                                 ; 00537ee9

