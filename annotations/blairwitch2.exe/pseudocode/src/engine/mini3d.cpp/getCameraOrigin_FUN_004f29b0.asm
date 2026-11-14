; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __esi engine_mini3d_cpp_getCameraOrigin_FUN_004f29b0(CVector3f *output)
;
;
; Referenced Globals:
;   undefined4 DAT_01d098b0
;   undefined4 DAT_01d098b4
;   undefined4 DAT_01d098b8
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004f29b0
        ;   Label: engine_mini3d.cpp_getCameraOrigin_FUN_004f29b0
    SUB ESP,0x18                        ; 004f29b1
    MOV EAX,ESI                         ; 004f29b4
    MOV EDX,dword ptr [0x01d098b0]      ; 004f29b6 | DAT_01d098b0
    MOV dword ptr [ESP + 0x14],EDX      ; 004f29bc
    MOV EDX,dword ptr [0x01d098b4]      ; 004f29c0 | DAT_01d098b4
    MOV dword ptr [ESP + 0xc],EDX       ; 004f29c6
    MOV EDX,dword ptr [0x01d098b8]      ; 004f29ca | DAT_01d098b8
    MOV dword ptr [ESP + 0x10],EDX      ; 004f29d0
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f29d4
    MOV dword ptr [ESP],EDX             ; 004f29d8
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f29db
    MOV EDI,ESI                         ; 004f29df
    MOV dword ptr [ESP + 0x4],EDX       ; 004f29e1
    MOV EDX,dword ptr [ESP + 0x10]      ; 004f29e5
    MOV ESI,ESP                         ; 004f29e9
    MOV dword ptr [ESP + 0x8],EDX       ; 004f29eb
    MOVSD ES:EDI,ESI                    ; 004f29ef
    MOVSD ES:EDI,ESI                    ; 004f29f0
    MOVSD ES:EDI,ESI                    ; 004f29f1
    ADD ESP,0x18                        ; 004f29f2
    POP EDI                             ; 004f29f5
    RET                                 ; 004f29f6

