; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0056d140(CDemonSet *this_ptr,CDemonGlobe *globe)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonGlobe *    Stack[0x8]:4   globe
;
; XREF[1]:
;   core_flame.cpp_CFlame_renderTransparent_FUN_004ca110 at 004ca1e8
;
; Referenced Globals:
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonRenderer g_CDemonRendererInstance
;   CDemonMission g_CDemonMissionInstance
;   undefined4 g_CDemonMissionInstance.is_in_editor
;   int g_QueuedCoronaGlobeCount
;   CDemonGlobe*[100] g_QueuedCoronaGlobes
;   int[100] g_QueuedCoronaGlobeAlphaMasks
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00
;
; *****************************************************************************

section .text

    MOV EAX,[0x0067d550]                ; 0056d140 | g_CDemonMissionInstance | g_CDemonMissionPtr
        ;   Label: core_set.cpp_CDemonSet_addQueuedCoronaGlobe_FUN_0056d140
    CMP dword ptr [EAX + 0x4],0x0       ; 0056d145 | g_CDemonMissionInstance.is_in_editor
    JNZ 0x0056d156                      ; 0056d149
        ;   XREF to: 0056d156 (CONDITIONAL_JUMP)  ; LAB_0056d156
    MOV ECX,dword ptr [0x0327785c]      ; 0056d14b | g_QueuedCoronaGlobeCount
    CMP ECX,0x64                        ; 0056d151
    JL 0x0056d157                       ; 0056d154
        ;   XREF to: 0056d157 (CONDITIONAL_JUMP)  ; LAB_0056d157
    RET                                 ; 0056d156
        ;   Label: LAB_0056d156
    PUSH ESI                            ; 0056d157
        ;   Label: LAB_0056d157
    PUSH EBX                            ; 0056d158
    MOV EBX,dword ptr [0x006703ec]      ; 0056d159 | g_CDemonRendererInstance | g_CDemonRendererPtr2
    MOV EDX,dword ptr [ESP + 0x10]      ; 0056d15f
    PUSH EBX                            ; 0056d163 | g_CDemonRendererInstance
    MOV dword ptr [ECX*0x4 + 0x3277860],EDX ; 0056d164 | g_QueuedCoronaGlobes
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00 ; 0056d16b
        ;   XREF to: 0048ce00 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0048ce00(CDemonRenderer * this_ptr)
    MOV EDX,dword ptr [0x0327785c]      ; 0056d170 | g_QueuedCoronaGlobeCount
    ADD ESP,0x4                         ; 0056d176
    LEA ESI,[EDX + 0x1]                 ; 0056d179
    MOV dword ptr [EDX*0x4 + 0x32779f0],EAX ; 0056d17c | g_QueuedCoronaGlobeAlphaMasks
    MOV dword ptr [0x0327785c],ESI      ; 0056d183 | g_QueuedCoronaGlobeCount
    POP EBX                             ; 0056d189
    POP ESI                             ; 0056d18a
    RET                                 ; 0056d18b

