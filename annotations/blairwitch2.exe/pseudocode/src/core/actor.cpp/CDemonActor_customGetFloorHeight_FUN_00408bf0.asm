; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408bf0(CDemonActor *this_ptr,CVector3f *position,float search_radius,float *out_floor_height )
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; float            Stack[0xc]:4   search_radius
; float *          Stack[0x10]:4   out_floor_height
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005ca565
;   TerminatedCString s_CDemonActor_customGetFlo_005ca577
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    MOV EDX,0x5ca565                    ; 00408bf0 | = "..\\core\\actor.cpp"
        ;   Label: core_actor.cpp_CDemonActor_customGetFloorHeight_FUN_00408bf0
    MOV ECX,0x2ee                       ; 00408bf5
    PUSH 0x5ca577                       ; 00408bfa | = "CDemonActor::customGetFloorHeight sho..."
    MOV dword ptr [0x01d046a0],EDX      ; 00408bff | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00408c05 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00408c0b
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00408c10
    LEA EAX,[EAX]                       ; 00408c13
    LEA EDX,[EDX]                       ; 00408c19
    NOP                                 ; 00408c1f

