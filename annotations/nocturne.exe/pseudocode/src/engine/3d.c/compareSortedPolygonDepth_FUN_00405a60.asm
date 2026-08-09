; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_compareSortedPolygonDepth_FUN_00405a60(void **entry_a,void **entry_b)
;
; Parameters:
; void * *         Stack[0x4]:4   entry_a
; void * *         Stack[0x8]:4   entry_b
;
; XREF[1]:
;   engine_3d.c_renderSortedPolygonList_FUN_00405b40 at 00405bf2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00405a60
        ;   Label: engine_3d.c_compareSortedPolygonDepth_FUN_00405a60
    MOV EDX,dword ptr [ESP + 0x4]       ; 00405a64
    MOV EAX,dword ptr [EAX]             ; 00405a68
    MOV EDX,dword ptr [EDX]             ; 00405a6a
    MOV EAX,dword ptr [EAX + 0xc]       ; 00405a6c
    MOV EDX,dword ptr [EDX + 0xc]       ; 00405a6f
    CMP EAX,EDX                         ; 00405a72
    JG 0x00405a7b                       ; 00405a74
        ;   XREF to: 00405a7b (CONDITIONAL_JUMP)  ; LAB_00405a7b
    JNZ 0x00405a81                      ; 00405a76
        ;   XREF to: 00405a81 (CONDITIONAL_JUMP)  ; LAB_00405a81
    XOR EAX,EDX                         ; 00405a78
    RET                                 ; 00405a7a
    MOV EAX,0x1                         ; 00405a7b
        ;   Label: LAB_00405a7b
    RET                                 ; 00405a80
    MOV EAX,0xffffffff                  ; 00405a81
        ;   Label: LAB_00405a81
    RET                                 ; 00405a86

