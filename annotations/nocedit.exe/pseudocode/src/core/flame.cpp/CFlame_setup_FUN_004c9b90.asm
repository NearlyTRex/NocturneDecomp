; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_flame_cpp_CFlame_setup_FUN_004c9b90(CFlame *this_ptr)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_bodypart.cpp_CBodyPart_FUN_0041ae50 at 0041aebf
;
; Referenced Globals:
;   SMRGLTextureBasic DAT_0067b100
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9b90
        ;   Label: core_flame.cpp_CFlame_setup_FUN_004c9b90
    PUSH ESI                            ; 004c9b91
    PUSH EDI                            ; 004c9b92
    PUSH EBP                            ; 004c9b93
    MOV EDX,dword ptr [ESP + 0x14]      ; 004c9b94
    PUSH EDX                            ; 004c9b98
    MOV EBP,0x67b100                    ; 004c9b99 | DAT_0067b100
    XOR EDI,EDI                         ; 004c9b9e
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0 ; 004c9ba0
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408bb0(CDemonActor * this_ptr)

