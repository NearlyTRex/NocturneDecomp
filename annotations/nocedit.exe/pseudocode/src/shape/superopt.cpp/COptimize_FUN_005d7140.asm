; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl double __cdecl shape_superopt_cpp_COptimize_FUN_005d7140(COptimize *this_ptr)
;
; Parameters:
; COptimize *      Stack[0x8]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005d7140
        ;   Label: shape_superopt.cpp_COptimize_FUN_005d7140
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d7143
    MOV EAX,dword ptr [EAX + 0x24]      ; 005d7147
    MOV dword ptr [ESP],EAX             ; 005d714a
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d714d
    MOV EAX,dword ptr [EAX + 0x28]      ; 005d7151
    MOV dword ptr [ESP + 0x4],EAX       ; 005d7154
    MOV EAX,dword ptr [ESP]             ; 005d7158
    MOV EDX,dword ptr [ESP + 0x4]       ; 005d715b
    ADD ESP,0x8                         ; 005d715f
    RET                                 ; 005d7162

