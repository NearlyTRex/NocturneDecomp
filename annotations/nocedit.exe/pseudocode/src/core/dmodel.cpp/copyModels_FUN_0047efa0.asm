; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CKeyFramedModel * core_dmodel.cpp_copyModels_FUN_0047efa0(CKeyFramedModel * * first, CKeyFramedModel * * second)
;
; Parameters:
; CKeyFramedModel * * Stack[0x4]:4   first
; CKeyFramedModel * * Stack[0x8]:4   second
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0047efa0
        ;   Label: core_dmodel.cpp_copyModels_FUN_0047efa0
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047efa4
    MOV EAX,dword ptr [EAX]             ; 0047efa8
    MOV dword ptr [EDX],EAX             ; 0047efaa
    MOV EAX,EDX                         ; 0047efac
    RET                                 ; 0047efae

