; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_pod_cpp_findFileInPod_FUN_00551960(SFoundFileInfo *info)
;
; Parameters:
; SFoundFileInfo * Stack[0x4]:4   info
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 00507b60
;
; Referenced Globals:
;   CDemonPod* g_CDemonPodPtr = 030e5090
;   CDemonPod g_CDemonPodInstance
;   undefined4 g_CDemonPodInstance.vtable
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x00680cdc]      ; 00551960 | g_CDemonPodPtr
        ;   Label: engine_pod.cpp_findFileInPod_FUN_00551960
    TEST EDX,EDX                        ; 00551966
    JNZ 0x0055196d                      ; 00551968
        ;   XREF to: 0055196d (CONDITIONAL_JUMP)  ; LAB_0055196d
    XOR EAX,EAX                         ; 0055196a
    RET                                 ; 0055196c
    MOV ECX,dword ptr [ESP + 0x4]       ; 0055196d
        ;   Label: LAB_0055196d
    PUSH ECX                            ; 00551971
    MOV EAX,EDX                         ; 00551972
    MOV EDX,dword ptr [EDX + 0x194]     ; 00551974 | g_CDemonPodInstance.vtable
    PUSH EAX                            ; 0055197a | g_CDemonPodInstance
    CALL dword ptr [EDX + 0x8]          ; 0055197b
    ADD ESP,0x8                         ; 0055197e
    RET                                 ; 00551981

