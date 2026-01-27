; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActorType * core_litecone.cpp_CLightCone_getActorType_FUN_00506b00(CLightCone * this_ptr)
;
; Parameters:
; CLightCone *     Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   CDemonActorType g_CLightConeClassInfo
;
; *****************************************************************************

section .text

    MOV EAX,0x2dd30f4                   ; 00506b00 | g_CLightConeClassInfo
        ;   Label: core_litecone.cpp_CLightCone_getActorType_FUN_00506b00
    RET                                 ; 00506b05

