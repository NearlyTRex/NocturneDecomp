; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_memdbg_cpp_SMemHead_add_FUN_0050eef0(SMemHead *header)
;
; Parameters:
; SMemHead *       Stack[0x4]:4   header
;
; XREF[3]:
;   shape_memdbg.cpp_debugCalloc_FUN_0050f350 at 0050f428
;   shape_memdbg.cpp_debugMalloc_FUN_0050f250 at 0050f31c
;   shape_memdbg.cpp_debugRealloc_FUN_0050f540 at 0050f685
;
; Referenced Globals:
;   SMemHead* g_MemoryListHead
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x02f0d938]      ; 0050eef0 | g_MemoryListHead
        ;   Label: shape_memdbg.cpp_SMemHead_add_FUN_0050eef0
    MOV EAX,dword ptr [ESP + 0x4]       ; 0050eef6
    MOV dword ptr [EAX],0x0             ; 0050eefa
    TEST ECX,ECX                        ; 0050ef00
    JNZ 0x0050ef0f                      ; 0050ef02
        ;   XREF to: 0050ef0f (CONDITIONAL_JUMP)  ; LAB_0050ef0f
    MOV [0x02f0d938],EAX                ; 0050ef04 | g_MemoryListHead
    MOV dword ptr [EAX + 0x4],ECX       ; 0050ef09
    MOV ECX,EAX                         ; 0050ef0c
    RET                                 ; 0050ef0e
    MOV dword ptr [ECX],EAX             ; 0050ef0f
        ;   Label: LAB_0050ef0f
    MOV [0x02f0d938],EAX                ; 0050ef11 | g_MemoryListHead
    MOV dword ptr [EAX + 0x4],ECX       ; 0050ef16
    MOV ECX,EAX                         ; 0050ef19
    RET                                 ; 0050ef1b

