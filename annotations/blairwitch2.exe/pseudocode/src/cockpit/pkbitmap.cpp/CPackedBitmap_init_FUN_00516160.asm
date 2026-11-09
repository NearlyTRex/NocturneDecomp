; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_init_FUN_00516160(CPackedBitmap *this_ptr,char *filename,int width,int height,int transparency_color,int apply_palette_flag)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
; int              Stack[0xc]:4   width
; int              Stack[0x10]:4   height
; int              Stack[0x14]:4   transparency_color
; int              Stack[0x18]:4   apply_palette_flag
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_005161d0
;   cockpit_pkbitmap.cpp_FUN_005168e0
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516160
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_init_FUN_00516160
    PUSH ESI                            ; 00516161
    PUSH EDI                            ; 00516162
    PUSH EBP                            ; 00516163
    MOV EBX,dword ptr [ESP + 0x14]      ; 00516164
    PUSH EBX                            ; 00516168
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_005161d0 ; 00516169
        ;   XREF to: 005161d0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_reset_FUN_005161d0(CPackedBitmap * this_ptr)
    ADD ESP,0x4                         ; 0051616e
    PUSH 0x14                           ; 00516171
    PUSH 0x0                            ; 00516173
    PUSH EBX                            ; 00516175
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00516176
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 0051617b
    MOV EDX,dword ptr [ESP + 0x28]      ; 0051617e
    PUSH EDX                            ; 00516182
    MOV ECX,dword ptr [ESP + 0x28]      ; 00516183
    PUSH ECX                            ; 00516187
    MOV ESI,dword ptr [ESP + 0x28]      ; 00516188
    PUSH ESI                            ; 0051618c
    MOV EDI,dword ptr [ESP + 0x28]      ; 0051618d
    PUSH EDI                            ; 00516191
    MOV EBP,dword ptr [ESP + 0x28]      ; 00516192
    PUSH EBP                            ; 00516196
    PUSH EBX                            ; 00516197
    CALL cockpit_pkbitmap.cpp_FUN_005168e0 ; 00516198
        ;   XREF to: 005168e0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_FUN_005168e0(CPackedBitmap * this_ptr, char * filename, int width, int height, ...)
    ADD ESP,0x18                        ; 0051619d
    MOV EAX,EBX                         ; 005161a0
    POP EBP                             ; 005161a2
    POP EDI                             ; 005161a3
    POP ESI                             ; 005161a4
    POP EBX                             ; 005161a5
    RET                                 ; 005161a6

