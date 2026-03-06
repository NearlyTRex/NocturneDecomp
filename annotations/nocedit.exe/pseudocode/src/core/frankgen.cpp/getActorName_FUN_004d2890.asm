; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_frankgen_cpp_getActorName_FUN_004d2890(CDemonActor *actor)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d2890
        ;   Label: core_frankgen.cpp_getActorName_FUN_004d2890
    MOV EAX,dword ptr [EAX]             ; 004d2894
    RET                                 ; 004d2896

