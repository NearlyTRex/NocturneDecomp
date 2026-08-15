; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_frankgen_cpp_getFrameCount_FUN_00495410(CKeyFramedModel *model_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   model_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00495410
        ;   Label: core_frankgen.cpp_getFrameCount_FUN_00495410
    MOV EAX,dword ptr [EAX + 0x100]     ; 00495414
    RET                                 ; 0049541a

