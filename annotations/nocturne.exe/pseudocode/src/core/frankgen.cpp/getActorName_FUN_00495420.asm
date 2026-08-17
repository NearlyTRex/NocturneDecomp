; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_frankgen_cpp_getActorName_FUN_00495420(CDemonActor *actor)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00495420
        ;   Label: core_frankgen.cpp_getActorName_FUN_00495420
    MOV EAX,dword ptr [EAX]             ; 00495424
    RET                                 ; 00495426

