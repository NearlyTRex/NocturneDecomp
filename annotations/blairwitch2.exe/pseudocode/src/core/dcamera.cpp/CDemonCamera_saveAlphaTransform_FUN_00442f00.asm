; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_00442f00(CDemonCamera *this_ptr,int alpha_index)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   alpha_index
;
; Referenced Globals:
;   undefined4 DAT_01c38b9c
;   undefined4 DAT_01c38ba0
;   undefined4 DAT_01c38ba4
;   undefined4 DAT_01c38ba8
;   undefined4 DAT_01c38bac
;   undefined4 DAT_01c38bb0
;   undefined4 DAT_01c38bb4
;   undefined4 DAT_01c38bb8
;   undefined4 DAT_01c38bbc
;   undefined4 DAT_01d04fb8
;   undefined4 DAT_01d04fbc
;   undefined4 DAT_01d04fc0
;   undefined4 DAT_01d04fc4
;   undefined4 DAT_01d04fc8
;   undefined4 DAT_01d04fcc
;   ... and 3 more
;
; Called Functions:
;   engine_matrix.c_getCameraOrigin_FUN_004ea3b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00442f00
        ;   Label: core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_00442f00
    PUSH EDI                            ; 00442f01
    SUB ESP,0xc                         ; 00442f02
    MOV ESI,ESP                         ; 00442f05
    CALL engine_matrix.c_getCameraOrigin_FUN_004ea3b0 ; 00442f07
        ;   XREF to: 004ea3b0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_getCameraOrigin_FUN_004ea3b0()
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00442f0c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00442f10
    SUB EAX,EDX                         ; 00442f17
    MOV EDX,dword ptr [ESP + 0x18]      ; 00442f19
    SHL EAX,0x2                         ; 00442f1d
    ADD EAX,EDX                         ; 00442f20
    LEA EDI,[EAX + 0x11ec]              ; 00442f22
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00442f28
    SHL EAX,0x2                         ; 00442f2c
    MOV ESI,ESP                         ; 00442f2f
    ADD EAX,EDX                         ; 00442f31
    MOVSD ES:EDI,ESI                    ; 00442f33
    MOVSD ES:EDI,ESI                    ; 00442f34
    MOVSD ES:EDI,ESI                    ; 00442f35
    MOV EDX,dword ptr [0x01c38b9c]      ; 00442f36 | DAT_01c38b9c
    MOV dword ptr [EAX + 0x124c],EDX    ; 00442f3c
    MOV EDX,dword ptr [0x01c38ba0]      ; 00442f42 | DAT_01c38ba0
    MOV dword ptr [EAX + 0x126c],EDX    ; 00442f48
    MOV EDX,dword ptr [0x01c38ba4]      ; 00442f4e | DAT_01c38ba4
    MOV dword ptr [EAX + 0x128c],EDX    ; 00442f54
    MOV EDX,dword ptr [0x01c38ba8]      ; 00442f5a | DAT_01c38ba8
    MOV dword ptr [EAX + 0x12ac],EDX    ; 00442f60
    MOV EDX,dword ptr [0x01c38bac]      ; 00442f66 | DAT_01c38bac
    MOV dword ptr [EAX + 0x12cc],EDX    ; 00442f6c
    MOV EDX,dword ptr [0x01c38bb0]      ; 00442f72 | DAT_01c38bb0
    MOV dword ptr [EAX + 0x12ec],EDX    ; 00442f78
    MOV EDX,dword ptr [0x01c38bb4]      ; 00442f7e | DAT_01c38bb4
    MOV dword ptr [EAX + 0x130c],EDX    ; 00442f84
    MOV EDX,dword ptr [0x01c38bb8]      ; 00442f8a | DAT_01c38bb8
    MOV dword ptr [EAX + 0x132c],EDX    ; 00442f90
    MOV EDX,dword ptr [0x01c38bbc]      ; 00442f96 | DAT_01c38bbc
    MOV dword ptr [EAX + 0x134c],EDX    ; 00442f9c
    MOV EDX,dword ptr [0x01d04fb8]      ; 00442fa2 | DAT_01d04fb8
    MOV dword ptr [EAX + 0x136c],EDX    ; 00442fa8
    MOV EDX,dword ptr [0x01d04fbc]      ; 00442fae | DAT_01d04fbc
    MOV dword ptr [EAX + 0x138c],EDX    ; 00442fb4
    MOV EDX,dword ptr [0x01d04fc0]      ; 00442fba | DAT_01d04fc0
    MOV dword ptr [EAX + 0x13ac],EDX    ; 00442fc0
    MOV EDX,dword ptr [0x01d04fc4]      ; 00442fc6 | DAT_01d04fc4
    MOV dword ptr [EAX + 0x13cc],EDX    ; 00442fcc
    MOV EDX,dword ptr [0x01d04fc8]      ; 00442fd2 | DAT_01d04fc8
    MOV dword ptr [EAX + 0x13ec],EDX    ; 00442fd8
    MOV EDX,dword ptr [0x01d04fcc]      ; 00442fde | DAT_01d04fcc
    MOV dword ptr [EAX + 0x140c],EDX    ; 00442fe4
    MOV EDX,dword ptr [0x01d04fd0]      ; 00442fea | DAT_01d04fd0
    MOV dword ptr [EAX + 0x142c],EDX    ; 00442ff0
    MOV EDX,dword ptr [0x01d04fd4]      ; 00442ff6 | DAT_01d04fd4
    MOV dword ptr [EAX + 0x144c],EDX    ; 00442ffc
    MOV EDX,dword ptr [0x01d04fd8]      ; 00443002 | DAT_01d04fd8
    MOV dword ptr [EAX + 0x146c],EDX    ; 00443008
    ADD ESP,0xc                         ; 0044300e
    POP EDI                             ; 00443011
    POP ESI                             ; 00443012
    RET                                 ; 00443013

