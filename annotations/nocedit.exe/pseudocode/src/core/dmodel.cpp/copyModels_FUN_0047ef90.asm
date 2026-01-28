; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CKeyFramedModel ** __cdecl core_dmodel_cpp_copyModels_FUN_0047ef90(CKeyFramedModel **first,CKeyFramedModel **second)
;
; Parameters:
; CKeyFramedModel * * Stack[0x4]:4   first
; CKeyFramedModel * * Stack[0x8]:4   second
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0047ef90
        ;   Label: core_dmodel.cpp_copyModels_FUN_0047ef90
    MOV EAX,dword ptr [ESP + 0x8]       ; 0047ef94
    MOV EAX,dword ptr [EAX]             ; 0047ef98
    MOV dword ptr [EDX],EAX             ; 0047ef9a
    MOV EAX,EDX                         ; 0047ef9c
    RET                                 ; 0047ef9e

