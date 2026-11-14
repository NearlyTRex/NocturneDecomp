; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CBoundingBox3D * __cdecl core_teleport_cpp_CTeleportDest_getBoundingBox_FUN_00594e90(CTeleportDest *this_ptr,CBoundingBox3D *out_box)
;
; Parameters:
; CTeleportDest *  Stack[0x4]:4   this_ptr
; CBoundingBox3D * Stack[0x8]:4   out_box
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 00594e90
        ;   Label: core_teleport.cpp_CTeleportDest_getBoundingBox_FUN_00594e90
    SUB ESP,0x18                        ; 00594e91
    MOV EAX,ESI                         ; 00594e94
    MOV ECX,0xbf800000                  ; 00594e96
    MOV ESI,0x40e00000                  ; 00594e9b
    MOV EDI,0x41000000                  ; 00594ea0
    MOV EDX,0xc0e00000                  ; 00594ea5
    MOV dword ptr [ESP + 0x4],ECX       ; 00594eaa
    MOV dword ptr [ESP + 0xc],ESI       ; 00594eae
    MOV dword ptr [ESP + 0x10],EDI      ; 00594eb2
    MOV dword ptr [ESP + 0x14],ESI      ; 00594eb6
    MOV ECX,0x6                         ; 00594eba
    MOV ESI,ESP                         ; 00594ebf
    MOV EDI,EAX                         ; 00594ec1
    MOV dword ptr [ESP + 0x8],EDX       ; 00594ec3
    MOV dword ptr [ESP],EDX             ; 00594ec7
    MOVSD.REP ES:EDI,ESI                ; 00594eca
    ADD ESP,0x18                        ; 00594ecc
    POP EDI                             ; 00594ecf
    RET                                 ; 00594ed0

