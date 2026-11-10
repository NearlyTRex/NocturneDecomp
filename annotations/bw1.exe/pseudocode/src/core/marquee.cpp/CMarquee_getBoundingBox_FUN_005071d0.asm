; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_marquee_cpp_CMarquee_getBoundingBox_FUN_005071d0(CMarquee *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 005071d0
        ;   Label: core_marquee.cpp_CMarquee_getBoundingBox_FUN_005071d0
    SUB ESP,0x18                        ; 005071d1
    MOV EDX,ESI                         ; 005071d4
    MOV ECX,dword ptr [ESP + 0x20]      ; 005071d6
    MOV EAX,ESP                         ; 005071da
    ADD ECX,0x184                       ; 005071dc
    CMP EAX,ECX                         ; 005071e2
    JNZ 0x0050720a                      ; 005071e4
        ;   XREF to: 0050720a (CONDITIONAL_JUMP)  ; LAB_0050720a
    MOV ECX,dword ptr [ESP + 0x20]      ; 005071e6
        ;   Label: LAB_005071e6
    LEA EAX,[ESP + 0xc]                 ; 005071ea
    ADD ECX,0x190                       ; 005071ee
    CMP EAX,ECX                         ; 005071f4
    JNZ 0x0050721f                      ; 005071f6
        ;   XREF to: 0050721f (CONDITIONAL_JUMP)  ; LAB_0050721f
    MOV ECX,0x6                         ; 005071f8
    MOV ESI,ESP                         ; 005071fd
    MOV EDI,EDX                         ; 005071ff
    MOVSD.REP ES:EDI,ESI                ; 00507201
    MOV EAX,EDX                         ; 00507203
    ADD ESP,0x18                        ; 00507205
    POP EDI                             ; 00507208
    RET                                 ; 00507209
    MOV EAX,dword ptr [ECX]             ; 0050720a
        ;   Label: LAB_0050720a
    MOV dword ptr [ESP],EAX             ; 0050720c
    MOV EAX,dword ptr [ECX + 0x4]       ; 0050720f
    MOV dword ptr [ESP + 0x4],EAX       ; 00507212
    MOV EAX,dword ptr [ECX + 0x8]       ; 00507216
    MOV dword ptr [ESP + 0x8],EAX       ; 00507219
    JMP 0x005071e6                      ; 0050721d
        ;   XREF to: 005071e6 (UNCONDITIONAL_JUMP)  ; LAB_005071e6
    MOV EAX,dword ptr [ECX]             ; 0050721f
        ;   Label: LAB_0050721f
    MOV dword ptr [ESP + 0xc],EAX       ; 00507221
    MOV EAX,dword ptr [ECX + 0x4]       ; 00507225
    MOV dword ptr [ESP + 0x10],EAX      ; 00507228
    MOV EAX,dword ptr [ECX + 0x8]       ; 0050722c
    MOV dword ptr [ESP + 0x14],EAX      ; 0050722f
    MOV ECX,0x6                         ; 00507233
    MOV ESI,ESP                         ; 00507238
    MOV EDI,EDX                         ; 0050723a
    MOVSD.REP ES:EDI,ESI                ; 0050723c
    MOV EAX,EDX                         ; 0050723e
    ADD ESP,0x18                        ; 00507240
    POP EDI                             ; 00507243
    RET                                 ; 00507244

