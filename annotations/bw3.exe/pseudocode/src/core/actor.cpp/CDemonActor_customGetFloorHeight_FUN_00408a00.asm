; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408a00(CDemonActor *this_ptr,CVector3f *position,float search_radius,float *out_floor_height )
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   search_radius
; float *          Stack[0x10]:4   out_floor_height
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005b54fb
;   TerminatedCString s_CDemonActor_customGetFlo_005b550d
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    MOV EDX,0x5b54fb                    ; 00408a00 | = "..\\core\\actor.cpp"
        ;   Label: core_actor.cpp_CDemonActor_customGetFloorHeight_FUN_00408a00
    MOV ECX,0x2e7                       ; 00408a05
    PUSH 0x5b550d                       ; 00408a0a | = "CDemonActor::customGetFloorHeight sho..."
    MOV dword ptr [0x01d71de0],EDX      ; 00408a0f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 00408a15 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00408a1b
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00408a20
    LEA EAX,[EAX]                       ; 00408a23
    LEA EDX,[EDX]                       ; 00408a29
    NOP                                 ; 00408a2f

