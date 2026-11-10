; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_saveAlphaTransform_FUN_004545b0(CDemonCamera *this_ptr,int alpha_index)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   alpha_index
;
; Referenced Globals:
;   undefined4 DAT_01c51d5c
;   undefined4 DAT_01c51d60
;   undefined4 DAT_01c51d64
;   undefined4 DAT_01c51d68
;   undefined4 DAT_01c51d6c
;   undefined4 DAT_01c51d70
;   undefined4 DAT_01c51d74
;   undefined4 DAT_01c51d78
;   undefined4 DAT_01c51d7c
;   undefined4 DAT_01d1dd18
;   undefined4 DAT_01d1dd1c
;   undefined4 DAT_01d1dd20
;   undefined4 DAT_01d1dd24
;   undefined4 DAT_01d1dd28
;   undefined4 DAT_01d1dd2c
;   ... and 3 more
;
; Called Functions:
;   engine_matrix.c_getCameraOrigin_FUN_00509050
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004545b0
        ;   Label: core_dcamera.cpp_CDemonCamera_saveAlphaTransform_FUN_004545b0
    PUSH EDI                            ; 004545b1
    SUB ESP,0xc                         ; 004545b2
    MOV ESI,ESP                         ; 004545b5
    CALL engine_matrix.c_getCameraOrigin_FUN_00509050 ; 004545b7
        ;   XREF to: 00509050 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_getCameraOrigin_FUN_00509050()
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004545bc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004545c0
    SUB EAX,EDX                         ; 004545c7
    MOV EDX,dword ptr [ESP + 0x18]      ; 004545c9
    SHL EAX,0x2                         ; 004545cd
    ADD EAX,EDX                         ; 004545d0
    LEA EDI,[EAX + 0x11ec]              ; 004545d2
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004545d8
    SHL EAX,0x2                         ; 004545dc
    MOV ESI,ESP                         ; 004545df
    ADD EAX,EDX                         ; 004545e1
    MOVSD ES:EDI,ESI                    ; 004545e3
    MOVSD ES:EDI,ESI                    ; 004545e4
    MOVSD ES:EDI,ESI                    ; 004545e5
    MOV EDX,dword ptr [0x01c51d5c]      ; 004545e6 | DAT_01c51d5c
    MOV dword ptr [EAX + 0x124c],EDX    ; 004545ec
    MOV EDX,dword ptr [0x01c51d60]      ; 004545f2 | DAT_01c51d60
    MOV dword ptr [EAX + 0x126c],EDX    ; 004545f8
    MOV EDX,dword ptr [0x01c51d64]      ; 004545fe | DAT_01c51d64
    MOV dword ptr [EAX + 0x128c],EDX    ; 00454604
    MOV EDX,dword ptr [0x01c51d68]      ; 0045460a | DAT_01c51d68
    MOV dword ptr [EAX + 0x12ac],EDX    ; 00454610
    MOV EDX,dword ptr [0x01c51d6c]      ; 00454616 | DAT_01c51d6c
    MOV dword ptr [EAX + 0x12cc],EDX    ; 0045461c
    MOV EDX,dword ptr [0x01c51d70]      ; 00454622 | DAT_01c51d70
    MOV dword ptr [EAX + 0x12ec],EDX    ; 00454628
    MOV EDX,dword ptr [0x01c51d74]      ; 0045462e | DAT_01c51d74
    MOV dword ptr [EAX + 0x130c],EDX    ; 00454634
    MOV EDX,dword ptr [0x01c51d78]      ; 0045463a | DAT_01c51d78
    MOV dword ptr [EAX + 0x132c],EDX    ; 00454640
    MOV EDX,dword ptr [0x01c51d7c]      ; 00454646 | DAT_01c51d7c
    MOV dword ptr [EAX + 0x134c],EDX    ; 0045464c
    MOV EDX,dword ptr [0x01d1dd18]      ; 00454652 | DAT_01d1dd18
    MOV dword ptr [EAX + 0x136c],EDX    ; 00454658
    MOV EDX,dword ptr [0x01d1dd1c]      ; 0045465e | DAT_01d1dd1c
    MOV dword ptr [EAX + 0x138c],EDX    ; 00454664
    MOV EDX,dword ptr [0x01d1dd20]      ; 0045466a | DAT_01d1dd20
    MOV dword ptr [EAX + 0x13ac],EDX    ; 00454670
    MOV EDX,dword ptr [0x01d1dd24]      ; 00454676 | DAT_01d1dd24
    MOV dword ptr [EAX + 0x13cc],EDX    ; 0045467c
    MOV EDX,dword ptr [0x01d1dd28]      ; 00454682 | DAT_01d1dd28
    MOV dword ptr [EAX + 0x13ec],EDX    ; 00454688
    MOV EDX,dword ptr [0x01d1dd2c]      ; 0045468e | DAT_01d1dd2c
    MOV dword ptr [EAX + 0x140c],EDX    ; 00454694
    MOV EDX,dword ptr [0x01d1dd30]      ; 0045469a | DAT_01d1dd30
    MOV dword ptr [EAX + 0x142c],EDX    ; 004546a0
    MOV EDX,dword ptr [0x01d1dd34]      ; 004546a6 | DAT_01d1dd34
    MOV dword ptr [EAX + 0x144c],EDX    ; 004546ac
    MOV EDX,dword ptr [0x01d1dd38]      ; 004546b2 | DAT_01d1dd38
    MOV dword ptr [EAX + 0x146c],EDX    ; 004546b8
    ADD ESP,0xc                         ; 004546be
    POP EDI                             ; 004546c1
    POP ESI                             ; 004546c2
    RET                                 ; 004546c3

