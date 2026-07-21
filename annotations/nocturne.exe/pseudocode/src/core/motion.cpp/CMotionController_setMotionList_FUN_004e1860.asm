; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_setMotionList_FUN_004e1860(undefined4 *param_1,undefined4 param_2)
;
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00 at 0051dd28
;
; Called Functions:
;   core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1860
        ;   Label: core_motion.cpp_CMotionController_setMotionList_FUN_004e1860
    MOV EBX,dword ptr [ESP + 0x8]       ; 004e1861
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e1865
    MOV dword ptr [EBX],EAX             ; 004e1869
    CMP byte ptr [EBX + 0x30],0x0       ; 004e186b
    JNZ 0x004e1873                      ; 004e186f
        ;   XREF to: 004e1873 (CONDITIONAL_JUMP)  ; LAB_004e1873
    POP EBX                             ; 004e1871
    RET                                 ; 004e1872
    PUSH 0x1                            ; 004e1873
        ;   Label: LAB_004e1873
    LEA EAX,[EBX + 0x30]                ; 004e1875
    PUSH EAX                            ; 004e1878
    MOV EDX,dword ptr [EBX]             ; 004e1879
    PUSH EDX                            ; 004e187b
    CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010 ; 004e187c
        ;   XREF to: 004e1010 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010()
    MOV byte ptr [EBX + 0x30],0x0       ; 004e1881
    ADD ESP,0xc                         ; 004e1885
    MOV dword ptr [EBX + 0x4],EAX       ; 004e1888
    POP EBX                             ; 004e188b
    RET                                 ; 004e188c

