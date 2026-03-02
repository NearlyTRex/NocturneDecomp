; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CObj_init_FUN_005d22d0(CObj *this_ptr,int poly_count,int vertex_count)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   poly_count
; int              Stack[0xc]:4   vertex_count
;
; XREF[2]:
;   shape_superopt.cpp_CObj_ctor_FUN_005d2230 at 005d2250
;   shape_superopt.cpp_optimizeCubeTriList_FUN_005d77a0 at 005d789a
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d22d0
        ;   Label: shape_superopt.cpp_CObj_init_FUN_005d22d0
    PUSH ESI                            ; 005d22d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005d22d2
    PUSH EBX                            ; 005d22d6
    MOV EAX,dword ptr [EBX + 0x18]      ; 005d22d7
    CALL dword ptr [EAX + 0x1c]         ; 005d22da
    ADD ESP,0x4                         ; 005d22dd
    MOV EDX,dword ptr [ESP + 0x10]      ; 005d22e0
    TEST EDX,EDX                        ; 005d22e4
    JNZ 0x005d22f8                      ; 005d22e6
        ;   XREF to: 005d22f8 (CONDITIONAL_JUMP)  ; LAB_005d22f8
    MOV ESI,dword ptr [ESP + 0x14]      ; 005d22e8
        ;   Label: LAB_005d22e8
    TEST ESI,ESI                        ; 005d22ec
    JNZ 0x005d230a                      ; 005d22ee
        ;   XREF to: 005d230a (CONDITIONAL_JUMP)  ; LAB_005d230a
    MOV EAX,0x1                         ; 005d22f0
        ;   Label: LAB_005d22f0
    POP ESI                             ; 005d22f5
    POP EBX                             ; 005d22f6
    RET                                 ; 005d22f7
    PUSH EDX                            ; 005d22f8
        ;   Label: LAB_005d22f8
    MOV EAX,dword ptr [EBX + 0x18]      ; 005d22f9
    PUSH EBX                            ; 005d22fc
    CALL dword ptr [EAX + 0xc]          ; 005d22fd
    ADD ESP,0x8                         ; 005d2300
    TEST EAX,EAX                        ; 005d2303
    JNZ 0x005d22e8                      ; 005d2305
        ;   XREF to: 005d22e8 (CONDITIONAL_JUMP)  ; LAB_005d22e8
    POP ESI                             ; 005d2307
    POP EBX                             ; 005d2308
    RET                                 ; 005d2309
    PUSH ESI                            ; 005d230a
        ;   Label: LAB_005d230a
    MOV EAX,dword ptr [EBX + 0x18]      ; 005d230b
    PUSH EBX                            ; 005d230e
    CALL dword ptr [EAX + 0x14]         ; 005d230f
    ADD ESP,0x8                         ; 005d2312
    TEST EAX,EAX                        ; 005d2315
    JNZ 0x005d22f0                      ; 005d2317
        ;   XREF to: 005d22f0 (CONDITIONAL_JUMP)  ; LAB_005d22f0
    POP ESI                             ; 005d2319
    POP EBX                             ; 005d231a
    RET                                 ; 005d231b

