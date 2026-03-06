; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_frankgen_cpp_getFrameCount_FUN_004d2880(CKeyFramedModel *model_ptr)
;
; Parameters:
; CKeyFramedModel * Stack[0x4]:4   model_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d2880
        ;   Label: core_frankgen.cpp_getFrameCount_FUN_004d2880
    MOV EAX,dword ptr [EAX + 0x100]     ; 004d2884
    RET                                 ; 004d288a

