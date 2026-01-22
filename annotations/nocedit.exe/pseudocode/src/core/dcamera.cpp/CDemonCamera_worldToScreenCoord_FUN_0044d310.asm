; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stack2_esi CVector3i * core_dcamera.cpp_CDemonCamera_worldToScreenCoord_FUN_0044d310(CDemonCamera * this_ptr, CVector3i * input_ptr, CVector3i * output_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
; CVector3i *      Stack[0x8]:4   input_ptr
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044d310
        ;   Label: core_dcamera.cpp_CDemonCamera_worldToScreenCoord_FUN_0044d310
    PUSH EDI                            ; 0044d311
    SUB ESP,0xc                         ; 0044d312
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0044d315
    MOV ECX,ESI                         ; 0044d319
    MOV ESI,dword ptr [ESP + 0x18]      ; 0044d31b
    MOV EAX,dword ptr [EDI + 0x8]       ; 0044d31f
    MOV EDX,dword ptr [ESI + 0x1c8]     ; 0044d322
    MOV dword ptr [ESP + 0x8],EAX       ; 0044d328
    MOV EAX,dword ptr [EDI]             ; 0044d32c
    MOV EBX,dword ptr [ESI + 0x1c0]     ; 0044d32e
    SUB EAX,EDX                         ; 0044d334
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044d336
    IMUL EDX                            ; 0044d33a
    IDIV EBX                            ; 0044d33c
    MOV dword ptr [ESP],EAX             ; 0044d33e
    MOV EBX,dword ptr [ESI + 0x1c4]     ; 0044d341
    MOV EDX,dword ptr [EDI + 0x8]       ; 0044d347
    MOV EAX,dword ptr [EDI + 0x4]       ; 0044d34a
    MOV EDI,dword ptr [ESI + 0x1cc]     ; 0044d34d
    MOV ESI,ESP                         ; 0044d353
    SUB EAX,EDI                         ; 0044d355
    MOV EDI,ECX                         ; 0044d357
    IMUL EDX                            ; 0044d359
    IDIV EBX                            ; 0044d35b
    MOV dword ptr [ESP + 0x4],EAX       ; 0044d35d
    MOVSD ES:EDI,ESI                    ; 0044d361
    MOVSD ES:EDI,ESI                    ; 0044d362
    MOVSD ES:EDI,ESI                    ; 0044d363
    MOV EAX,ECX                         ; 0044d364
    ADD ESP,0xc                         ; 0044d366
    POP EDI                             ; 0044d369
    POP EBX                             ; 0044d36a
    RET                                 ; 0044d36b

