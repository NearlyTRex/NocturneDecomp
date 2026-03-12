; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_fileio_cpp_parseTimestampRecord_FUN_004b2270(char *input_string,STimestampRecord *output_record)
;
; Parameters:
; char *           Stack[0x4]:4   input_string
; STimestampRecord * Stack[0x8]:4   output_record
; Local Variables:
; char[512]        Stack[-0x224]:512  local_224
; uint             Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int              Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
; int              Stack[-0x10]:4  local_10
; int              Stack[-0xc]:4  local_c
; int              Stack[-0x8]:4  local_8
;
; XREF[1]:
;   engine_fileio.cpp_readTimestampFile_FUN_004b23a0 at 004b24d4
;
; Referenced Globals:
;   TerminatedCString s_d_d_d_d_d_d_d_n_n_0062613e
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_0060013c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2270
        ;   Label: engine_fileio.cpp_parseTimestampRecord_FUN_004b2270
    SUB ESP,0x220                       ; 004b2271
    MOV EBX,dword ptr [ESP + 0x22c]     ; 004b2277
    LEA EAX,[ESP + 0x21c]               ; 004b227e
    PUSH EAX                            ; 004b2285
    PUSH EAX                            ; 004b2286
    LEA EAX,[ESP + 0x8]                 ; 004b2287
    PUSH EAX                            ; 004b228b
    LEA EAX,[ESP + 0x224]               ; 004b228c
    PUSH EAX                            ; 004b2293
    LEA EAX,[ESP + 0x224]               ; 004b2294
    PUSH EAX                            ; 004b229b
    LEA EAX,[ESP + 0x224]               ; 004b229c
    PUSH EAX                            ; 004b22a3
    LEA EAX,[ESP + 0x220]               ; 004b22a4
    PUSH EAX                            ; 004b22ab
    LEA EAX,[ESP + 0x220]               ; 004b22ac
    PUSH EAX                            ; 004b22b3
    LEA EAX,[ESP + 0x22c]               ; 004b22b4
    PUSH EAX                            ; 004b22bb
    LEA EAX,[ESP + 0x224]               ; 004b22bc
    PUSH EAX                            ; 004b22c3
    PUSH 0x62613e                       ; 004b22c4 | = "%d: %d / %d / %d %d : %d : %d \"%[^\"..."
    MOV ECX,dword ptr [ESP + 0x254]     ; 004b22c9
    MOV EDX,0xffffffff                  ; 004b22d0
    PUSH ECX                            ; 004b22d5
    MOV dword ptr [ESP + 0x24c],EDX     ; 004b22d6
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 004b22dd
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x30                        ; 004b22e2
    CMP dword ptr [ESP + 0x21c],0x0     ; 004b22e5
    JGE 0x004b22f9                      ; 004b22ed
        ;   XREF to: 004b22f9 (CONDITIONAL_JUMP)  ; LAB_004b22f9
    XOR EAX,EAX                         ; 004b22ef
    ADD ESP,0x220                       ; 004b22f1
    POP EBX                             ; 004b22f7
    RET                                 ; 004b22f8
    PUSH EDI                            ; 004b22f9
        ;   Label: LAB_004b22f9
    PUSH ESI                            ; 004b22fa
    MOV byte ptr [EBX],0x0              ; 004b22fb
    MOV EAX,dword ptr [ESP + 0x208]     ; 004b22fe
    MOV dword ptr [EBX + 0x100],EAX     ; 004b2305
    MOV EAX,dword ptr [ESP + 0x214]     ; 004b230b
    SUB EAX,0x76c                       ; 004b2312
    MOV dword ptr [EBX + 0x118],EAX     ; 004b2317
    MOV EAX,dword ptr [ESP + 0x20c]     ; 004b231d
    DEC EAX                             ; 004b2324
    MOV dword ptr [EBX + 0x114],EAX     ; 004b2325
    MOV EAX,dword ptr [ESP + 0x210]     ; 004b232b
    MOV dword ptr [EBX + 0x110],EAX     ; 004b2332
    MOV EAX,dword ptr [ESP + 0x218]     ; 004b2338
    MOV dword ptr [EBX + 0x10c],EAX     ; 004b233f
    MOV EAX,dword ptr [ESP + 0x21c]     ; 004b2345
    MOV dword ptr [EBX + 0x108],EAX     ; 004b234c
    LEA ESI,[ESP + 0x8]                 ; 004b2352
    MOV EAX,dword ptr [ESP + 0x220]     ; 004b2356
    LEA EDI,[EBX + 0x128]               ; 004b235d
    MOV dword ptr [EBX + 0x104],EAX     ; 004b2363
    PUSH EDI                            ; 004b2369
    MOV AL,byte ptr [ESI]               ; 004b236a
        ;   Label: LAB_004b236a
    MOV byte ptr [EDI],AL               ; 004b236c
    CMP AL,0x0                          ; 004b236e
    JZ 0x004b2382                       ; 004b2370
        ;   XREF to: 004b2382 (CONDITIONAL_JUMP)  ; LAB_004b2382
    MOV AL,byte ptr [ESI + 0x1]         ; 004b2372
    ADD ESI,0x2                         ; 004b2375
    MOV byte ptr [EDI + 0x1],AL         ; 004b2378
    ADD EDI,0x2                         ; 004b237b
    CMP AL,0x0                          ; 004b237e
    JNZ 0x004b236a                      ; 004b2380
        ;   XREF to: 004b236a (CONDITIONAL_JUMP)  ; LAB_004b236a
    POP EDI                             ; 004b2382
        ;   Label: LAB_004b2382
    MOV EAX,0x1                         ; 004b2383
    POP ESI                             ; 004b2388
    POP EDI                             ; 004b2389
    ADD ESP,0x220                       ; 004b238a
    POP EBX                             ; 004b2390
    RET                                 ; 004b2391

