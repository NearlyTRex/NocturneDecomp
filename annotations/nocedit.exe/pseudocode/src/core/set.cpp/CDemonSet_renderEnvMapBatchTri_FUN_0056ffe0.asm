; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_renderEnvMapBatchTri_FUN_0056ffe0(CDemonSet *this_ptr,void *param_2,int count,int alpha)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; void *           Stack[0x8]:4   param_2
; int              Stack[0xc]:4   count
; int              Stack[0x10]:4   alpha
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderFaceBatchOrEnvMap_FUN_00570700 at 00570763
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00570040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056ffe0
        ;   Label: core_set.cpp_CDemonSet_renderEnvMapBatchTri_FUN_0056ffe0
    PUSH ESI                            ; 0056ffe1
    PUSH 0x3c                           ; 0056ffe2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0056ffe4
    PUSH EDX                            ; 0056ffe8
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0056ffe9
    PUSH ECX                            ; 0056ffed
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0056ffee
    PUSH EBX                            ; 0056fff2
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0056fff3
    PUSH ESI                            ; 0056fff7
    CALL core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00570040 ; 0056fff8
        ;   XREF to: 00570040 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderEnvMapPrimitives_FUN_00570040(CDemonSet * this_ptr, void * param_2, int count, int alpha, ...)
    ADD ESP,0x14                        ; 0056fffd
    POP ESI                             ; 00570000
    POP EBX                             ; 00570001
    RET                                 ; 00570002

