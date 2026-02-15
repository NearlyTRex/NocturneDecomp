; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CObj_containsVertex_FUN_005d3350(CObj *this_ptr,CVert *vertex_ptr)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; CVert *          Stack[0x8]:4   vertex_ptr
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 005d3350
        ;   Label: shape_superopt.cpp_CObj_containsVertex_FUN_005d3350
    MOV EAX,dword ptr [ESP + 0x8]       ; 005d3354
    CMP EAX,dword ptr [ECX + 0x4]       ; 005d3358
    JC 0x005d332c                       ; 005d335b
        ;   XREF to: 005d332c (CONDITIONAL_JUMP)  ; LAB_005d332c
    MOV EAX,dword ptr [ECX]             ; 005d335d
    SHL EAX,0x3                         ; 005d335f
    MOV EDX,EAX                         ; 005d3362
    SHL EAX,0x3                         ; 005d3364
    SUB EAX,EDX                         ; 005d3367
    MOV EDX,EAX                         ; 005d3369
    MOV EAX,dword ptr [ECX + 0x4]       ; 005d336b
    MOV ECX,dword ptr [ESP + 0x8]       ; 005d336e
    ADD EAX,EDX                         ; 005d3372
    CMP EAX,ECX                         ; 005d3374
    JBE 0x005d332c                      ; 005d3376
        ;   XREF to: 005d332c (CONDITIONAL_JUMP)  ; LAB_005d332c
    MOV EAX,0x1                         ; 005d3378
    RET                                 ; 005d337d

