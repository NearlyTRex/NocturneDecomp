; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_copyToBufferAtPosition_FUN_0054afb0 (CPackedBitmap *this_ptr,uchar *dest_buffer,int dest_x,int dest_y,int bits_per_pixel, int buffer_stride)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; uchar *          Stack[0x8]:4   dest_buffer
; int              Stack[0xc]:4   dest_x
; int              Stack[0x10]:4   dest_y
; int              Stack[0x14]:4   bits_per_pixel
; int              Stack[0x18]:4   buffer_stride
;
; Called Functions:
;   cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_0054ae70
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x8]       ; 0054afb0
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_copyToBufferAtPosition_FUN_0054afb0
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054afb4
    MOV EDX,dword ptr [ESP + 0x10]      ; 0054afb8
    TEST ECX,ECX                        ; 0054afbc
    JNZ 0x0054afc1                      ; 0054afbe
        ;   XREF to: 0054afc1 (CONDITIONAL_JUMP)  ; LAB_0054afc1
    RET                                 ; 0054afc0
    PUSH EDI                            ; 0054afc1
        ;   Label: LAB_0054afc1
    PUSH ESI                            ; 0054afc2
    PUSH EBX                            ; 0054afc3
    MOV ESI,dword ptr [ESP + 0x20]      ; 0054afc4
    PUSH EDX                            ; 0054afc8
    IMUL EDX,ESI                        ; 0054afc9
    MOV EBX,dword ptr [ESP + 0x28]      ; 0054afcc
    PUSH EAX                            ; 0054afd0
    IMUL EAX,EBX                        ; 0054afd1
    ADD ECX,EAX                         ; 0054afd4
    MOV EAX,EDX                         ; 0054afd6
    SAR EDX,0x1f                        ; 0054afd8
    SHL EDX,0x3                         ; 0054afdb
    SBB EAX,EDX                         ; 0054afde
    SAR EAX,0x3                         ; 0054afe0
    ADD EAX,ECX                         ; 0054afe3
    PUSH EAX                            ; 0054afe5
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0054afe6
    PUSH EDI                            ; 0054afea
    CALL cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_0054ae70 ; 0054afeb
        ;   XREF to: 0054ae70 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_0054ae70(CPackedBitmap * this_ptr, uchar * dest_buffer, int bits_per_pixel, int row_stride)
    ADD ESP,0x10                        ; 0054aff0
    POP EBX                             ; 0054aff3
    POP ESI                             ; 0054aff4
    POP EDI                             ; 0054aff5
    RET                                 ; 0054aff6

